import java.util.Scanner;

public class javaStringReverse {
  public static void main(String args[]) {
    String huruf, hasil = "";
    Scanner scanner = new Scanner(System.in);
    huruf = scanner.nextLine();
    int jumlah = huruf.length();
    int jumlahHuruf = jumlah - 1;
    for (int i = 0; i < jumlah; i++) {
      hasil = hasil + huruf.charAt(jumlahHuruf);
      jumlahHuruf--;
    }
    if(huruf.equals(hasil)){
        System.out.println("Yes");
    }else{
        System.out.println("No");
    }
  }
}
