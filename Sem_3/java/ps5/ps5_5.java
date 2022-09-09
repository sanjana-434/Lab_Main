import java.util.*;

class Student{
    private String name;
    private float grade;
    private float credit;
    
    public Student(){
        name = "";
        grade = 0;
        credit = 0;
    }
    public Student(String name,float grade){
        this.name = name;
        this.grade = grade;
        calculateCredit();
    }
    
    public void calculateCredit(){
        credit = (float)(10*grade);
    }
    public String getName(){
        return name;
    }
    public float getGrade(){
        return grade;
    }
    public float getCredit(){
        return credit;
    }
    public void setName(String name){
        this.name = name;
    }
    public void setGrade(float grade){
        this.grade = grade;
    }
    public void setCredit(float credit){
        this.credit = credit;
    }
    public String toString(){
        return "\nName : "+name+"\nGrade : "+grade+"\nCredit : "+credit;
    }
}

public class ps5_5{
    public static void main(String args[]){
        Student s[] = new Student[5];
        String name;
        float grade;
        System.out.println("Enter details of Students : ");
        Scanner scan = new Scanner(System.in);
        for (int i=0;i<5;i++){
            System.out.println("\nStudent "+(i+1)+" : ");
            System.out.println("-------------");
            System.out.printf("Name : ");
            name = scan.nextLine();
            System.out.printf("Grade : ");
            grade = scan.nextFloat();
            scan.nextLine();
            s[i] = new Student(name,grade);
        }
        System.out.println("Displaying details of all students : ");;
        for (int i=0;i<5;i++){
            System.out.println("\nStudent "+(i+1)+" : ");
            System.out.println("-------------");
            System.out.println(s[i].toString());
        }
    }
}