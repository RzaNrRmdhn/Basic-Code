import java.util.Scanner;

public class javaLoop2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 0; i < n; i++) {
            int a = input.nextInt(); // 0
            int b = input.nextInt(); // 2
            int c = input.nextInt(); // 10
            int d = a + b; // 2
            System.out.print(d+" ");
            for(int j =1; j <c; j++){
                d = d + (int)Math.pow(2, j)*b; // 5 + 4 = 9
                System.out.print(d + " ");
            }
        System.out.println("");
        }
    }
}
