import java.util.Scanner;

public class UTP {
    public static void main(String[] args) {
        // Mobil mobil = new Mobil();
        // mobil.setMerk("Hyundai");
        // mobil.setWarna("hitam");
        // mobil.setTahunKeluaran(2022);
        // mobil.setHarga(350000000);
        
        // System.out.println(mobil.getMerk());
        // System.out.println(mobil.getWarna());
        // System.out.println(mobil.getTahunKeluaran());
        // System.out.println(mobil.getHarga());
        // System.out.format("%.0f", mobil.hitungPajak());

        


Scanner sc = new Scanner(System.in);

double jarak = sc.nextInt();
double waktu = sc.nextInt();
double kecepatan = jarak / waktu / 1000;

System.out.println(String.format("%.2f", kecepatan));

if (kecepatan > 80.00) {
System.out.println("Cepat");
} else if (kecepatan < 40.00) {
System.out.println("Lambat");
} else {
System.out.println("Normal");
}
}
}
    
