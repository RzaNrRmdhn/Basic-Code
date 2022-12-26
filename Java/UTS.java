import java.util.Scanner;

/**
 * UTS
 */
public class UTS {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        for (int i = 1; i <= 10; i++) {
            System.out.println(a+b*(i-1)); // misal a = 3, b = 1,, (3+1)
        }
    }
    
}

