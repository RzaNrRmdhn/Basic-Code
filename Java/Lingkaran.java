/**
 * Lingkaran
 */
public class Lingkaran extends bangundatar{
    private double jari;

    public Lingkaran(String warna, double jari) {
        super(warna);
        this.jari = jari;
    }

    public Lingkaran() {
    }

    @Override
    public double luas(){
        return 3.14 * jari * jari;
    }

    @Override
    public double keliling(){
        return 2 * 3.14 * jari;
    }

    public double getJari() {
        return jari;
    }

    public void setJari(double jari) {
        this.jari = jari;
    }
    
    
    
}