class Rectangle{
    private length;
    private width;

    Rectangle(){
        length = 1;
        width = 1;
    }
    public float getPerimeter(){
        return (float)(length+width);
    }
    public float getArea(){
        return (float)(length*width);
    }
    public int setData(float length,float width){
        if( length <=(float)20.0 && length>=(float)0.0 && width <=(float)20.0 && width >=(float)0.0){
            this.length = length;
            this.width = width;
            return 1;
        }
        return 0;
    }
    public float getLength(){
        return (float)length;
    }
    public float getWidth(){
        return (float)width;
    }
}
public class ps5_2{
    public static void main(String args[]){
        Rectangle r;
        float l,w;
        Scanner scan = new Scanner (System.in);
        do{
            System.out.printf("Enter length and width of Rectangle : ");
            l = scan.nextFloat();
            w = sacn.nextFloat();
            int check = r.setData(l,w);
        }while(check==0);
        System.out.println("Area of Rectangle : "+r.getArea());
        System.out.println("Perimeter of Rectangle : "+r.getPerimeter());
    }
}