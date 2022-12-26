class Nilai {
    String mataKuliah;
    double nilaiTugas;
    double nilaiUts;
    double nilaiUas;
    
    public String getMataKuliah() {
        return mataKuliah;
    }
    public void setMataKuliah(String mataKuliah) {
        this.mataKuliah = mataKuliah;
    }
    public double getNilaiTugas() {
        return nilaiTugas;
    }
    public void setNilaiTugas(double nilaiTugas) {
        this.nilaiTugas = nilaiTugas;
    }
    public double getNilaiUts() {
        return nilaiUts;
    }
    public void setNilaiUts(double nilaiUts) {
        this.nilaiUts = nilaiUts;
    }
    public double getNilaiUas() {
        return nilaiUas;
    }
    public void setNilaiUas(double nilaiUas) {
        this.nilaiUas = nilaiUas;
    }
    public Nilai() {
    }

    
    public Nilai(String mataKuliah) {
        this.mataKuliah = mataKuliah;
        nilaiTugas = 0;
        nilaiUts = 0;
        nilaiUas = 0;
    }
    public Nilai(String mataKuliah, double nilaiTugas, double nilaiUts, double nilaiUas) {
        this.mataKuliah = mataKuliah;
        this.nilaiTugas = nilaiTugas;
        this.nilaiUts = nilaiUts;
        this.nilaiUas = nilaiUas;
    }

    double hitungNA(){
        return (30 * nilaiTugas / 100) + (30 * nilaiUts / 100) + (40 * nilaiUas /100);
    }

}


class Mahasiswa{
    private String nama;
    private String npm;
    private Nilai nilai;
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
    public Nilai getNilai() {
        return nilai;
    }
    public void setNilai(Nilai nilai) {
        this.nilai = nilai;
    }
    public Mahasiswa() {
    }

    public Mahasiswa(String nama, String npm, Nilai nilai) {
        this.nama = nama;
        this.npm = npm;
        this.nilai = nilai;
    }

    void print(){
        System.out.println("Nama : " + nama);
        System.out.println("NPM : " + npm);
        System.out.println("Mata Kuliah : " + nilai.mataKuliah);
        System.out.println("Nilai Tugas : " + nilai.nilaiTugas);
        System.out.println("Nilai UTS : " + nilai.nilaiUts);
        System.out.println("Nilai UAS : " + nilai.nilaiUas);
        System.out.println("Nilai Akhir : " + nilai.hitungNA());
        
    }
}