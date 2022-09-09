class StackOfIntegers{
    private int elements[];
    private int size;
    
    public StackOfIntegers(){
        elements = new int[20];
        size=-1;
    }
    public StackOfIntegers(int capacity){
        elements = new int[capacity];
        size = -1;
    }
    public boolean empty(){
        if (size==-1){
            return true;
        }
        return false;
    }
    public int peek(){
        return elements[size];
    }
    public int pop(){
        if (empty()){
            System.out.println("Underflow!");
            return 0;
        }
        else{
            int temp = elements[size];
            size--;
            return temp;
        }
    }
    public int getSize(){
        return size;
    }
    public void push(int value){
        size++;
        elements[size] = value; 
    }
}
public class ps5_7
{
	public static void main(String[] args) {
		StackOfIntegers s = new StackOfIntegers(30);
		s.push(1);
		s.push(2);
		s.push(3);
		System.out.println(s.getSize());
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());
		System.out.println(s.pop());
	}
}
