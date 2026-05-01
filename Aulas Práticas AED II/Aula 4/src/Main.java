import java.lang.reflect.Array;
import java.util.ArrayList; // Import the ArrayList class

public class Main {

	public static void main(String[] args) {
		int tam;

		tam = Integer.parseInt(MyIO.readLine());
		Jogo[] games = new Jogo[tam];
		
		for (int i = 0; i < tam; i++) {
	        String linha = MyIO.readLine();
	        
	        if (linha.equals("FIM")) break;
	        games[i] = new Jogo();
	        games[i].ler(linha);
	        }
		
		tam = Integer.parseInt(MyIO.readLine());
		Jogo[] games2 = new Jogo[tam];
		
		for (int i = 0; i < tam; i++) {
	        String linha = MyIO.readLine();
	        
	        if (linha.equals("FIM")) break;
	        games2[i] = new Jogo();
	        games2[i].ler(linha);
	        }
		ArrayList<String> wow = new ArrayList<String>();
}

class Jogo {
	
	private int rank;
	private String nome_do_jogo;
	private String plataforma;
	private int ano_de_lancamento;
	private String genero;
	private String editora;
	private double NA_Vendas;
	private double EU_Vendas;
	private double JP_Vendas;
	private double Outras_Vendas;
	private double Vendas_Global;
	
	Jogo(){
		this.rank = 0;
		this.nome_do_jogo = " ";
		this.plataforma = " ";
		this.ano_de_lancamento = 0;
		this.genero = " ";
		this.editora = " ";
		this.NA_Vendas = 0;
		this.EU_Vendas = 0;
		this.JP_Vendas = 0;
		this.Outras_Vendas = 0;
		this.Vendas_Global = 0;
		}
		
	Jogo (String n, String p, int a){
		this.nome_do_jogo = n;
		this.plataforma = p;
		this.ano_de_lancamento = a;
	}
	
	//Setters
	public void setRank(int a) {
		this.rank = a;
	}
	public void setNomeDoJogo(String n) {
		this.nome_do_jogo = n;
	}
	public void setPlataforma(String p) {
		this.plataforma = p;
	}
	public void setAnoDeLancamento(int a) {
		this.ano_de_lancamento = a;
	}
	public void setGenero(String g) {
		this.genero = g;
	}
	public void setEditora(String e) {
		this.editora = e;
	}
	public void setNAVendas(double v) {
		this.NA_Vendas = v;
	}
	public void setEUVendas(double v) {
		this.EU_Vendas = v;
	}
	public void setJPVendas(double v) {
		this.JP_Vendas = v;
	}
	public void setOutrasVendas(double v) {
		this.Outras_Vendas = v;
	}
	public void setVendasGlobal(double v) {
		this.Vendas_Global = v;
	}
	
	//Getters
	public int getRank() {
		return this.rank;
	}
	public String getNomeDoJogo() {
		return this.nome_do_jogo;
	}
	public String getPlataforma() {
		return this.plataforma;
	}
	public int getAnoDeLancamento() {
		return this.ano_de_lancamento;
	}
	public String getGenero() {
		return this.genero;
	}
	public String getEditora() {
		return this.editora;
	}
	public double getNAVendas() {
		return this.NA_Vendas;
	}
	public double getEUVendas() {
		return this.EU_Vendas;
	}
	public double getJPVendas() {
		return this.JP_Vendas;
	}
	public double getOutrasVendas() {
		return this.Outras_Vendas;
	}
	public double getVendasGlobal() {
		return this.Vendas_Global;
	}
	
	//Outros Metódos
	public void ler(String linha) { 
		String[] dados = linha.split("\\|");
		System.out.println(linha);
		this.rank = Integer.parseInt(dados[0]);
   	    this.nome_do_jogo = dados[1];
		this.plataforma = dados[2];
	    this.ano_de_lancamento = Integer.parseInt(dados[3]);
	    this.genero = dados[4];
	    this.editora = dados[5];
	    this.NA_Vendas = Double.parseDouble(dados[6]);
		this.EU_Vendas = Double.parseDouble(dados[7]);
	   	this.JP_Vendas = Double.parseDouble(dados[8]);
	    this.Outras_Vendas = Double.parseDouble(dados[9]);
	    this.Vendas_Global = Double.parseDouble(dados[10]);
		}
	public void imprimir() {
		MyIO.println(toString());
	}
	public Jogo clone() {
		Jogo temp = new Jogo();
		temp.setRank(this.getRank());
		temp.setNomeDoJogo(this.getNomeDoJogo());
		temp.setPlataforma(this.getPlataforma());
		temp.setAnoDeLancamento(this.getAnoDeLancamento());
		temp.setGenero(this.getGenero());
		temp.setEditora(this.getEditora());
		temp.setNAVendas(this.getNAVendas());
		temp.setEUVendas(this.getEUVendas());
		temp.setJPVendas(this.getJPVendas());
		temp.setOutrasVendas(this.getOutrasVendas());
		temp.setVendasGlobal(this.getVendasGlobal());
		
		return temp;
	}
	public String toString() {
		return  nome_do_jogo + ". " + editora + ". " + ano_de_lancamento + ". Vendas global: " + Vendas_Global;
		
	}
}

class Sort {
	int tam;
	public void swap(int a, int b) {
		int sbr = a;
		b = a;
		a = sbr;
	}

	public Sort bubble(Jogo[] g) {
		for(int i = (Array.getLength(g) - 1); i > 0; i--) {
			for(int j = 1; j < i; j++) {
				if(g[j] > g[j + 1]) {
					swap(j, j+1);
				}
			}
		}
	}

	public Sort insertion(Jogo[] g) {
		for(int i = 1; i < Array.getLength(g); i++) {
			int temp = g[i];
			int j = i - 1;
			
			while((j >= 0) && (g[j] > temp)) {
				g[j+1] = g[j];
				j--;
			}
			g[j+1] = temp;
			}
		}
	}

	public Sort selection(Jogo[] g) {
		for(int i = 0; )
	
	}
}