import java.util.*;

public class stringBuffer{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a string");
        StringBuffer sb = new StringBuffer(scan.nextLine());
        System.out.println("Capacity of string buffer : "+sb.capacity());
        
        sb = sb.reverse();
        System.out.println("Reverse of string : "+sb);
        for (int i=0; i<sb.length() ;i++){
            char ch = sb.charAt(i);
            sb.setCharAt(i,Character.toUpperCase(ch));
        }
        System.out.println("Reverse string in upper case : "+sb);

        System.out.println("Enter a string to be appended to the resultant string : ");
        StringBuffer sb2 = new StringBuffer(scan.nextLine());
        sb.append(sb2);
        System.out.println("Resultant String  : "+sb);

    }
}