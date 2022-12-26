import java.util.Scanner;

public class javaStdOutIn2{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    double b = scanner.nextDouble();
    String c = scanner.nextLine();
    c = scanner.nextLine();
    scanner.close();

    System.out.println("String: " + c);
    System.out.println("Double: " + b);
    System.out.println("Int: " + a);
    }
}
