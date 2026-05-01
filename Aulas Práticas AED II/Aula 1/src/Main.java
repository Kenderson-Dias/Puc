
public class Main {
	public static void main(String[] args) {
		MyIO.setCharset("UTF-8");
		System.out.println("QUESTÃO 1");
		int dias;
		String alqta;
		do {
			alqta = aliquota(dias);
		} while ( != 'FIM');
		
		System.out.println("QUESTÃO 2");
		
		System.out.println("QUESTÃO 3");
	}
}

static String aliquota(int d) {
	if(d >= 0 && d <= 180) {
		return "22,5%";
	}  else if (d >= 181 && d <= 360) {
		return "20,0%";
	} else if (d >= 361 && d <= 720) {
		return "17,5%";
	} else if (d > 720) {
		return "15,0%";
	}
}

static 