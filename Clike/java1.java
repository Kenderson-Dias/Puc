import java.util.Scanner;

public class java1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        scanner.close();

        StringBuilder sb = new StringBuilder();
        for (int i = a; i <= b; i++) {
            sb.append(i);
        }
        String s = sb.toString();

        System.out.print(s);

        StringBuilder reversedSb = new StringBuilder(s);
        System.out.println(reversedSb.reverse().toString());
    }
}