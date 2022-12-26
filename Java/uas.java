import java.util.ArrayList;

public class uas {

    public static void main(String[] args) {
        
    }
}


class Profesor {
    private String name;
    
    public Profesor(String name) {
    this.name = name;
    }
    
    public Profesor() {
    }
    
    public String getName() {
    return name;
    }
    
    public void setName(String name) {
    this.name = name;
    }
    
    }


    class Course {
        private String courseName;
        private Profesor profesor;
        
        public Course(String courseName, String profName) {
        profesor = new Profesor(profName);
        this.courseName = courseName;
        
        }
        
        public Course(String courseName, Profesor profesor) {
        this.courseName = courseName;
        this.profesor = profesor;
        }
        
        
        public Course(String courseName) {
        this.courseName = courseName;
        }
        
        public Course() {
        }
        
        public String getCourseName() {
        return courseName;
        }
        
        public void setCourseName(String courseName) {
        this.courseName = courseName;
        }
        
        public Profesor getProfesor() {
        return profesor;
        }
        
        public void setProfesor(Profesor profesor) {
        this.profesor = profesor;
        }
        }


class PartTimeStudent extends Student{
    private int duration;
    public Course courses;
    public ArrayList course = new ArrayList<>();
    
    public PartTimeStudent(String name) {
    super(name);
    }
    
    public PartTimeStudent(String name, int duration) {
    super(name);
    this.duration = duration;
    }
    
    public PartTimeStudent(int duration) {
    this.duration = duration;
    }
    
    public PartTimeStudent() {
    }
    
    public int getDuration() {
    return duration;
    }
    
    public void setDuration(int duration) {
    this.duration = duration;
    }
    
    @Override
    public void enrol(Course c){
    course.add(c);
    }
    
    @Override
    public void printCourses(){
    for(Course courses:course){
    System.out.println(courses.getCourseName()+ ": " + courses.getProfesor().getName());
    }
    // for(int i = 0; i < course.size(); i++){
    // System.out.println(courses.getProfesor() + courses.getCourseName());
    // }
    }
    }




class Student implements StudentInterface{
    private String name;
    private Course courses;
    private ArrayList course = new ArrayList<>();
    // private ArrayList course = new ArrayList();
    
    public Student(String name) {
    this.name = name;
    }
    
    public Student() {
    }
    
    public String getName() {
    return name;
    }
    
    public void setName(String name) {
    this.name = name;
    }
    
    public void enrol(Course c){
    course.add(c);
    }
    
    public void printCourses(){
    for(Course courses:course){
    System.out.println(courses.getCourseName()+ ": " + courses.getProfesor().getName());
    }
    }
    
    @Override
    public void takeExam(){
    System.out.println("Take course exam");
    }
}
/**
 * 
 */
interface aaa {

    int a =0;
}
