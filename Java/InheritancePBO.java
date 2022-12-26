public class InheritancePBO {

    public static void main(String[] args){

        Mamalia m = new Mamalia();
        Aves a = new Aves();
        Hewan h = new Hewan();
        
        h.ciriHewan();
        
        System.out.println("\nAves: ");
        
        a.ciriHewan();
        a.ciriAves();
        
        System.out.println("\nMamalia: ");
        
        m.ciriHewan();
        m.ciriMamalia();
    }
    
}
