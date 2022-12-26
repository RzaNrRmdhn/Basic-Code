public class Hewan {
    public void ciriHewan(){
        System.out.println("Makan");
        System.out.println("Bergerak");
        System.out.println("Bernapas");
    }   
}
class Mamalia extends Hewan{
        public void ciriMamalia(){
            System.out.println("Menyusui");
            System.out.println("Melahirkan");
    }
}

class Aves extends Hewan{
        public void ciriAves(){
            System.out.println("Bertelur");
            System.out.println("Bersayap");
        }
    }