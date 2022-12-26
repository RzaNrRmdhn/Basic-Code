class Mobil {
    String merk;
    String warna; 
    int tahun_keluaran;
    String nomor_rangka;
    double harga;

    public String getMerk() {
        return merk;
    }
    public void setMerk(String merk) {
        this.merk = merk;
    }
    public String getWarna() {
        return warna;
    }
    public void setWarna(String warna) {
        this.warna = warna;
    }
    public String getNomor_rangka() {
        return nomor_rangka;
    }
    public void setNomor_rangka(String nomor_rangka) {
        this.nomor_rangka = nomor_rangka;
    }
    public int getTahunKeluaran() {
        return tahun_keluaran;
    }
    public void setTahunKeluaran(int tahun_keluaran) {
        this.tahun_keluaran = tahun_keluaran;
    }
    public double getHarga() {
        return harga;
    }
    public void setHarga(double harga) {
        this.harga = (int) harga;
    }

    Mobil(){
    }

    Mobil(String merk, String warna, int tahun_keluaran, String nomor_rangka, double harga){
        this.merk = merk;
        this.warna = warna;
        this.tahun_keluaran = tahun_keluaran;
        this.nomor_rangka = nomor_rangka;
        this.harga = harga;
    }

    double hitungPajak(){
        if(tahun_keluaran < 2010){
            this.harga = (2.5 * this.harga / 100); 
        }else if(tahun_keluaran <2015){
            this.harga = (5 * this.harga / 100); 
        }else if(tahun_keluaran < 2020){
            this.harga = (10 * this.harga / 100); 
        }else{
            this.harga = (15 * (this.harga  / 100));
        }

        return harga;
    }

}
