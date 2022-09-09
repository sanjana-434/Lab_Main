import java.util.*;


class Complex{
    private int real;
    private int img;
    
    public Complex(){
        real = 0;
        img = 0;
    }
    public Complex(int real,int img){
        this.img= img;
        this.real = real;
    }
    public int getReal(){
        return real;
    }
    public int getImg(){
        return img;
    }
    public void setImg(int img){
        this.img = img;
    }
    public void setReal(int real){
        this.real = real;
    }
    public Complex add(Complex b){
        Complex c = new Complex();
        c.img = img+b.img;
        c.real = real+b.real;
        return c;
    }
    public Complex subtract(Complex b){
        Complex c = new Complex();
        c.img = img-b.img;
        c.real = real-b.real;
        return c;
    }
    public String toString(){
        if (img>=0){
            return real+" + "+img+"i";
        }
        else{
            return real+" - "+(-img)+"i";
        }
    }
}
public class ComplexNumbers
{
	public static void main(String[] args) {
		Complex a = new Complex(5,5);
		Complex b = new Complex(10,6);
		Complex c = a.add(b);
		Complex d = a.subtract(b);
		System.out.println("a = "+a.toString());
		System.out.println("b = "+b.toString());
		System.out.println("a+b = "+c.toString());
		System.out.println("a-b = "+d.toString());
	}
}
