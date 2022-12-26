import java.time.LocalDate;
import java.time.Month;
import java.util.*;

class Student extends Person {
    private String npm, programStudi;
    

    public Student(String npm, String programStudi,String name, LocalDate dateOfBirth) {
        super(name);
        this.dateOfBirth = dateOfBirth;
        this.npm = npm;
        this.programStudi = programStudi;
    }

    
    public String getNpm() {
        return npm;
    }

    public void setNpm(String npm) {
        this.npm = npm;
    }

    public String getProgramStudi() {
        return programStudi;
    }

    public void setProgramStudi(String programStudi) {
        this.programStudi = programStudi;
    }

    @Override
    public void menulis(){
        System.out.println("Menulis Tugas Akhir");
    }

}
