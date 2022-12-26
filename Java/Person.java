import java.time.LocalDate;
import java.time.Month;
import java.util.*;

abstract class Person implements PersonInterface {
    private String name;
    protected LocalDate dateOfBirth;

    public Person(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public LocalDate getDateOfBirth() {
        return dateOfBirth;
    }
    public void setDateOfBirth(LocalDate date) {
        this.dateOfBirth = date;
    }
}

