# O projeto le um arquivo .Ula e resulta na geração de um novo arquivo .hex
# Os valores lidos inicialmente do arquivo agora em formatados em um código reescrito em hexadecimal 
# Os valores serão inseridos posteriormente em um circuto montado na plataforma Tinkercad 
# Link do projeto: https://www.tinkercad.com/things/kOhXCaF2mzK-copy-of-copy-of-placalab01


import sys
import os

MNEMONICOS = {
    "COPIAA":  0x0,  "COPIAB":  0x1,  "AXB":     0x2,  "NAXNB":   0x3,
    "AEBN":    0x4,  "NB":      0x5,  "NAONB":   0x6,  "NA":      0x7,
    "AONB":    0x8,  "UML":     0x9,  "ZEROL":   0xA,  "AEB":     0xB,
    "NAEB":    0xC,  "AENB":    0xD,  "AOB":     0xE,  "NAENB":   0xF,
}

def nibble_hex(valor):
    """Converte inteiro (0-15) em caractere hexadecimal maiúsculo."""
    return format(valor & 0xF, 'X')

def converter(arquivo_ula, arquivo_hex):
    if not os.path.exists(arquivo_ula):
        print(f"[ERRO] Arquivo '{arquivo_ula}' nao encontrado.")
        sys.exit(1)

    instrucoes_hex = []
    x_atual = 0
    y_atual = 0
    
    encontrou_inicio = False
    encontrou_fim = False

    with open(arquivo_ula, 'r', encoding='utf-8') as f:
        linhas = f.readlines()

    arquivo_grande = len(linhas) > 100

    for numero, linha in enumerate(linhas, start=1):
        linha_strip = linha.strip()

        if not linha_strip:
            print(f"[ERRO] Linha {numero} está vazia.")
            continue

        token_simples = linha_strip.lower().replace(':', '').replace('.', '')
        if token_simples in ('inicio', 'fim'):
            if token_simples == 'inicio': encontrou_inicio = True
            if token_simples == 'fim': encontrou_fim = True
            continue

        if ';' not in linha:
            print(f"[ERRO] Linha {numero} não contém ';'.")
            continue

        linha_limpa = linha.replace(';', ' ').replace('.', ' ')
        tokens = linha_limpa.split()
        
        for token in tokens:
            token_lower = token.lower()

            if token_lower in ('inicio:', 'inicio'):
                encontrou_inicio = True
                continue
                
            if token_lower == 'fim':
                encontrou_fim = True
                continue

            if '=' in token:
                partes = token.split('=', 1)
                var = partes[0].upper()
                val = partes[1]

                if var == 'X':
                    try:
                        x_atual = int(val) & 0xF
                    except ValueError:
                        try:
                            x_atual = int(val, 16) & 0xF
                        except ValueError:
                            print(f"  o x deu meme no(Linha {numero}): '{val}'")
                    continue

                if var == 'Y':
                    try:
                        y_atual = int(val) & 0xF
                    except ValueError:
                        try:
                            y_atual = int(val, 16) & 0xF
                        except ValueError:
                            print(f"  o y deu meme no(Linha {numero}): '{val}'")
                    continue

                if var == 'W':
                    mnemonico_key = val.upper()
                    if mnemonico_key in MNEMONICOS:
                        s = MNEMONICOS[mnemonico_key]
                        instr = nibble_hex(x_atual) + nibble_hex(y_atual) + nibble_hex(s)
                        instrucoes_hex.append(instr)
                        
                        if not arquivo_grande:
                            print(f"  Linha {numero}: W = {val} -> {instr} (X={x_atual:X}, Y={y_atual:X}, S={s:X})")
                    else:
                        print(f"  [AVISO] Mnemonico desconhecido (Linha {numero}): '{val}'")
                    continue

    if not encontrou_inicio: 
        return

    if not encontrou_fim:
        return
    
    with open(arquivo_hex, 'w', encoding='utf-8') as f:
        for instr in instrucoes_hex:
            f.write(instr + '\n')
    
def main():
    arquivo_ula = 'TESTEULA.ULA'
    arquivo_hex = 'testeula.hex'
    
    converter(arquivo_ula, arquivo_hex)

if __name__ == '__main__':
    main()
