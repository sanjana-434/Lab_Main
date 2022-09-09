class Employee{
    private int id;
    private String firstName;
    private String lastName;
    private int salary;
    
    public Employee(int id,String firstName,String lastName,int salary){
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.salary = salary;
    }
    public int getID(){
        return id;
    }
    public String getFirstName(){
        return firstName;
    }
    public String getLastName(){
        return lastName;
    }
    public String getName(){
        return firstName+" "+lastName;
    }
    public int getSalary(){
        return salary;
    }
    public void setSalary(int salary){
        this.salary = salary;
    }
    public int getAnnualSalary(int percent){
        return 12*salary;
    }
    int raiseSalary(int percent){
        salary = salary + percent*salary/100;
        return salary;
    }
    public String toString(){
        return "\nEmployee id : "+id+"\nName : "+getName()+"\nSalary : "+salary;
    }
}
public class Main
{
	public static void main(String[] args) {
		Employee e = new Employee(1,"Sanjana","Rajasekaran",1000000);
		System.out.println(e.toString());
		e.raiseSalary(5);
		System.out.println(e.toString());
	}
}
