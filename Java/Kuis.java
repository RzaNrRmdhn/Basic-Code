import java.util.Date;
import java.time.LocalDate;
import java.time.Month;

public class Kuis {
    public static void main(String[] args) {
        // Titik t = new Titik(0,0);
        // Titik u = new Titik(3,4);
        // System.out.println(t.distance(u));

        // Titik t = new Titik(12,3);
        // Lingkar l = new Lingkar(7.2, t);
        // System.out.println("Luas: "+l.luas());
        // System.out.println("Keliling: "+l.keliling());
        // System.out.println(l.getTitikPusat().getX());
        // System.out.println(l.getTitikPusat().getY());

        // Person p = new Person();
        // p.setName("Andi");

        // LocalDate date = LocalDate.of(2003, Month.JUNE, 5);
        // p.setDateOfBirth(date);
        
        // System.out.println(p.getDateOfBirth().toString());

        // LocalDate date = LocalDate.of(2003, Month.JUNE, 5);
        // Student s = new Student("2007051001","Manajemen Informatika","Andi",date);

        // System.out.println(s.getNpm());
        // System.out.println(s.getName());
        // System.out.println(s.getDateOfBirth().toString());
        // System.out.println(s.getProgramStudi());

        LocalDate date = LocalDate.of(2003, Month.JUNE, 5);
        PersonInterface s = new Student("2007051001","Manajemen Informatika","Andi",date);
        
        s.menulis();
    }
}

// class Titik{
//     private int x, y;

//     public int getX() {
//         return x;
//     }

//     public void setX(int x) {
//         this.x = x;
//     }

//     public int getY() {
//         return y;
//     }

//     public void setY(int y) {
//         this.y = y;
//     }

// }
