public class Titik {
    private int x;
    private int y;
    
    public Titik(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
    public double distance (Titik o){
        return Math.sqrt(Math.pow(o.x-x, 2) + Math.pow(o.y-y, 2));
    }
}

class SegiTiga {
    private Titik A, B, C;

    public SegiTiga() {
    }

    public SegiTiga(Titik a, Titik b, Titik c) {
        A = a;
        B = b;
        C = c;
    }

    public Titik getA() {
        return A;
    }

    public void setA(Titik a) {
        A = a;
    }

    public Titik getB() {
        return B;
    }

    public void setB(Titik b) {
        B = b;
    }

    public Titik getC() {
        return C;
    }

    public void setC(Titik c) {
        C = c;
    }

    public double Keliling(){
        return A.distance(B) + B.distance(C) + C.distance(A);
    }
    
    
}