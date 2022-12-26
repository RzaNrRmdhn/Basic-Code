import java.util.Scanner;

public class Trigonometri{
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        double x = input.nextDouble();
        double sudut = Math.toRadians(x);
        
        System.out.println(String.format("%.5f %.5f %.5f", Math.sin(sudut), Math.cos(sudut), Math.tan(sudut)));
    }
}