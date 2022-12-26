public class NasabahBank { //8
    public String nama; // atribut
    public String noRekening;
    public double saldo; // 8

    public NasabahBank(){ // 11
        nama = null;
        noRekening = null;
        saldo = 0.0;
    }

    public NasabahBank(String nama, String noRekening, double saldo){ //11
        this.nama = nama;
        this.noRekening = noRekening;
        this.saldo = saldo;
    }

    public NasabahBank(String nama, String noRekening){// 11
        this.nama = nama;
        this.noRekening = noRekening;
    }

    public void cetak() { // 10
        System.out.println("Nama: " + nama);
        System.out.println("No Rekening: " + noRekening);
        System.out.println("Saldo: " + saldo);
    }

    public void setoran(double nilai) { // 9
        saldo = saldo + nilai;
    }

    public void tarik(double nilai) { // 9
        if(saldo - nilai < 0){
            System.out.println("Saldo tidak cukup");
        }else{
            saldo -= nilai;
        }
    }
}
