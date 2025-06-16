n1_str = input("Digite o primeiro número (n1): ")
n1 = int(n1_str)

n2_str = input("Digite o segundo número (n2): ")
n2 = int(n2_str)

for i in range(n1, n2 + 1):
    print(i)

for i in range(n2, n1 - 1, -1):
    if i > 9:
        print(f"{i % 10}{i // 10}")
    else: 
        print(i)