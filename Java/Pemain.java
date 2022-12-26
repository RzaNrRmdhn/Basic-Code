public class Pemain {
    public String warna;
    public double ukuran;
    public int posX, posY, v;

    public Pemain(){
        warna = "Hitam";
        ukuran = 10;
        posX = 100;
        posY = 100;
        v = 1;
    }

    public Pemain(String warna, double ukuran, int posX, int posY, int v){
        this.warna = warna;
        this.ukuran = ukuran;
        this.posX = posX;
        this.posY = posY;
        this.v = v;
    }

    public Pemain(String warna, double ukuran){
        this.warna = warna;
        this.ukuran = ukuran;
        posX = 100;
        posY = 100;
        v = 1;
    }

    public void kiri() {
        if(posX - v < 0){
            posX = 0;
        }else{
            posX -= v;
        }
    }

    public void kanan() {
        if(posX + v > 200){
            posX= 200;
        }else{
            posX += v;
        }
    }

    public void atas() {
        if(posY - v < 0){
            posY = 0;
        }else{
            posY -= v;
        }
    }

    public void bawah() {
        if(posY + v > 200){
            posY = 200;
        }else{
            posY += v;
        }
    }

}
