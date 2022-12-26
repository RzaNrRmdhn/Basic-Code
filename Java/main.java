import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int r = input.nextInt();
        int t = input.nextInt();

        double r1 = r;
        double t1 = t;

        double volume;

        volume = 3.14 * r1 * r1 * t1 / 1000000;

        System.out.println(String.format("%.3f", volume));
    }
}