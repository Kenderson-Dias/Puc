import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        int n1 = 1, n2 = 5;

        for(int i = n1; i <= n2; i++){
            System.out.print(i);
        }

        for(int i = n2; i >= n1; i--){
            if(i > 9){
            System.out.print("" + (i % 10) + (i /10));
            } else {
                System.out.print(i);
            }
        }
    }
}