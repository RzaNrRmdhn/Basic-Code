import java.util.Scanner;

public class string {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // int n = input.nextInt();
        // input.nextLine();

        // String[] Fussion = new String[n];
        // for (int i = 0; i < n; i++) {            
        //     Fussion[i] = input.nextLine();
        // }

        // for (int i = 0; i < n; i++) {
        //     System.out.print(Fussion[i] + " ");
        // }

        // String kalimat = input.nextLine();
        // int x = input.nextInt();
        // int y = input.nextInt();    

        // System.out.println(kalimat.substring(x,y));

        String Kalimat = input.nextLine();
        String Sub = input.nextLine();

        int index = Kalimat.indexOf(Sub);
        if (index >= 0) {
            System.out.println("Ya");
        } else {
            System.out.println("Tidak");
        }
        input.close();
    }
}
