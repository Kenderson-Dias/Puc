
public class Main {
	
	public static void main(String[] args) {
		MyIO.setCharset("ISO-8859-1");
		int tam;
		/*tam = MyIO.readline();
		 Jogo[] games = new Jogo[Integer.parseInt(tam)];
		 */
		tam = MyIO.readInt();
		Jogo[] games = new Jogo[tam];
		
		for (int i = 0; i < tam; i++) {
	        String linha = MyIO.readLine();
	        if (linha.equals("FIM")) break;
	        
	        games[i] = new Jogo();
	        games[i].ler(linha);
	        
	        String busca = MyIO.readLine();

	        while (busca != null && !busca.equals("FIM")) {
	            
	        	String nomeBusca = busca;
	            int anoBusca = MyIO.readInt();
	            String editoraBusca = MyIO.readLine();

	            boolean encontrado = false;
	            for (int i1 = 0; i1 < tam; i1++) {
	                if (games[i1] != null &&
	                    games[i1].getNomeDoJogo().equals(nomeBusca) &&
	                    games[i1].getAnoDeLancamento() == anoBusca &&
	                    games[i1].getEditora().equals(editoraBusca)) {
	                    
	    
	                    System.out.println(games[i1].getNomeDoJogo() + ". " + 
	                                       games[i1].getEditora() + ". " + 
	                                       games[i1].getAnoDeLancamento() + ". " + 
	                                       "Vendas global: " + games[i1].getVendasGlobal());
	                    
	                    encontrado = true;
	                    break;
	                }
	            }
	            
	            busca = MyIO.readLine();
	        }
	    }
	}

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
		String[] dados = linha.split(";");
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
