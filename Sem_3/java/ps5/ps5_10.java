class BloodData{
    private String bloodType;
    private String RhFactor;
    
    public BloodData(){
        bloodType = "O";
        RhFactor = "+";
    }
    public BloodData(String bloodType,String RhFactor){
        this.RhFactor = RhFactor;
        this.bloodType = bloodType;
    }
    public String getBloodType(){
        return bloodType;
    }
    public String getRhFactor(){
        return RhFactor;
    }
    public void setBloodType(String bloodType){
        this.bloodType = bloodType;
    }
    public void setRhFactor(String RhFactor){
        this.RhFactor = RhFactor;
    }
}
class Patient{
    private int id;
    private int age;
    private BloodData bd;
    
    public Patient(){
        id = 0;
        age =0;
        bd.setRhFactor("+");
        bd.setBloodType("O");
    }
    public Patient(int id,int age,String bloodType,String RhFactor){
        this.id= id;
        this.age = age;
        bd.setRhFactor(RhFactor);
        bd.setBloodType(bloodType);
    }
    public int getId(){
        return id;
    }
    public int getAge(){
        return age;
    }
    public void setId(int id){
        this.id = id;
    }
    public void setAge(int age){
        this.age = age;
    }
    public String toString(){        
        return "\nID Number : "+id+"\nAge : "+age+"\nBlood Type : "+bd.getBloodType()+"\nRh Factor : "+bd.getRhFactor();
    }
}

public class ps5_10{
	public static void main(String[] args) {
		Patient p1 = new Patient(100,18,"A","+");
		p1.toString();
	}
}
