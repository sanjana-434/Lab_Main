public class Player{
    private String name;
    private int age;
    private String country;

    public Player(){
        name = "";
        age=0;
        country = "";
    }
    public Player(String name , int age , String country){
        this.name = name;
        this.age = age;
        this.country = country;
    }
    public String getName(){
        return name;
    }
    public String getCountry(){
        return country;
    }
    public int getAge(){
        return age;
    }
    public  toString(){
        return "Name : "+name+"\n"+"Age : "+age+"\n"+"Country : "+country;
    }
}
public class ps5_3{
    public void static main(String args[]){
        Player p;
        p.setData("kenny",22,"Brazil");
        System.out.println("Displaying player details : ");
        System.out.println(p.toString());
    }
}