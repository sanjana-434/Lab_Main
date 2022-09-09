
class Rock{
    protected int numberOfSample;
    protected String description;
    
    public Rock(){
        numberOfSample = 0;
        description = " ";
    }
    public Rock(int n,String d){
        numberOfSample = n;
        description = d;
    }
    public int getNumberOfSample(){
        return numberOfSample;
    }
    public String getDecription(){
        return description;
    }
    public void setNumberOfSample(int n){
        numberOfSample = n;
    }
    public void setDescription(String d){
        description = d;
    }
    
}
class IgneousRock extends Rock{
    double weight;
    public IgneousRock(int n,String d,double w){
        super(n,d);
        weight = w;
    }
    public void setWeight(double weight){
        this.weight = weight;
    }
    public double getWeight(){
        return weight;
    }
    public String toString(){
        return "\nNumber of Samples : "+numberOfSample+"\nDescription : "+description+"\nWeight : "+weight;
    }
}
class SedimentaryRock extends Rock{
    double weight;
    public SedimentaryRock(int n,String d,double w){
        super(n,d);
        weight = w;
    }
    public void setWeight(double weight){
        this.weight = weight;
    }
    public double getWeight(){
        return weight;
    }
    public String toString(){
        return "\nNumber of Samples : "+numberOfSample+"\nDescription : "+description+"\nWeight : "+weight;
    }
}
class MetamorphicRock extends Rock{
    double weight;
    public MetamorphicRock(int n,String d,double w){
        super(n,d);
        weight = w;
        }
    public void setWeight(double weight){
        this.weight = weight;
    }
    public double getWeight(){
        return weight;
    }
    public String toString(){
        return "\nNumber of Samples : "+numberOfSample+"\nDescription : "+description+"\nWeight : "+weight;
    }
    
}
public class ps5_12
{
	public static void main(String[] args) {
	    IgneousRock i = new IgneousRock(12,"Igneous rocks (from the Greek word for \"fire\") form when hot, molten rock (magma) crystallizes and solidifies. ",90);
	    SedimentaryRock s = new SedimentaryRock(34,"Sedimentary rocks are formed from deposits of pre-existing rocks or pieces of once-living organism that accumulate on the Earth's surface.",59);
	    MetamorphicRock m = new MetamorphicRock(28,"Metamorphic rocks started out as some other type of rock, but have been substantially changed from their original igneous, sedimentary, or earlier metamorphic form.",179);
	    System.out.println("\nIgneous Rocks  "+i.toString());
	    System.out.println("\nMetamorphic Rock  "+m.toString());
	    System.out.println("\nSedimentary Rock  "+s.toString());
	    
	}
	
}
