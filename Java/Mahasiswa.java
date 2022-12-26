import java.util.ArrayList;

/**
 * Mahasiswa
 */
class Mahasiswa {
    private String nama;
    private String npm;
    private double nilaiTugas;
    private double nilaiUas;
    private double nilaiUts;
    private double NA;
    
    public Mahasiswa(String nama, String npm, double nilaiTugas, double nilaiUts, double nilaiUas){
        this.nama = nama;
        this.npm = npm;
        this.nilaiTugas = nilaiTugas;
        this.nilaiUas = nilaiUas;
        this.nilaiUts = nilaiUts;
    }
    

    public void printData(String jurusan){
        System.out.println("NPM : " + this.npm);
        System.out.println("Nama : " + this.nama);
        System.out.println("Jurusan : " + jurusan);
        System.out.println("Nilai tugas : " + this.nilaiTugas);
        System.out.println("Nilai UTS : " + this.nilaiUts);
        System.out.println("Nilai UAS : " + this.nilaiUas);
        System.out.println("Nilai akhir : " + this.NA);
    }

    public void printData(){
        System.out.println("NPM : " + this.npm);
        System.out.println("Nama : " + this.nama);
        System.out.println("Nilai tugas : " + this.nilaiTugas);
        System.out.println("Nilai UTS : " + this.nilaiUts);
        System.out.println("Nilai UAS : " + this.nilaiUas);
        System.out.println("Nilai akhir : " + this.NA);
    }

    public int sumValue(int x, int y) {
        return x + y;
    }

    public void hitungNA(){
        this.NA = (this.nilaiTugas*0.3) + (this.nilaiUts*0.35) + (this.nilaiUas*0.35);
    }

    public void hitungNA(double nilaiTugas, double nilaiUts, double nilaiUas){
        this.NA = (this.nilaiTugas*0.3) + (this.nilaiUts*0.35) + (this.nilaiUas*0.35);
    }

    public void hitungNA(String pesan){
        System.out.println("Nilai Tidak Valid");
    }

    public void hitungTugas(ArrayList<Double> nilai) {
        double hasil = 0;
        for (double total : nilai) {
            hasil += total;
        }
        nilaiTugas = hasil/nilai.size();
    }


    public String getNama() {
        return nama;
    }


    public void setNama(String nama) {
        this.nama = nama;
    }


    public String getNpm() {
        return npm;
    }


    public void setNpm(String npm) {
        this.npm = npm;
    }


    public double getNilaiTugas() {
        return nilaiTugas;
    }

    public void setNilaiTugas(double nilaiTugas) {
        this.nilaiTugas = nilaiTugas;
    }


    public double getNilaiUas() {
        return nilaiUas;
    }


    public void setNilaiUas(double nilaiUas) {
        this.nilaiUas = nilaiUas;
    }


    public double getNilaiUts() {
        return nilaiUts;
    }


    public void setNilaiUts(double nilaiUts) {
        this.nilaiUts = nilaiUts;
    }


    public double getNA() {
        return NA;
    }


    public void setNA(double nA) {
        NA = nA;
    }

    
}
