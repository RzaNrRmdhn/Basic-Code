/**
 * Lingkar
 */
public class Lingkar {

    private double radius;
    private Titik titikPusat;

    public Lingkar(double radius) {
        this.radius = radius;
    }

    public Lingkar(double radius, Titik titikPusat) {
        this.radius = radius;
        this.titikPusat = titikPusat;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double luas(){
        return Math.PI * radius * radius;
    }

    public double keliling(){
        return 2 * Math.PI * radius;
    }

    public Titik getTitikPusat() {
        return titikPusat;
    }

    public void setTitikPusat(Titik titikPusat) {
        this.titikPusat = titikPusat;
    }
}