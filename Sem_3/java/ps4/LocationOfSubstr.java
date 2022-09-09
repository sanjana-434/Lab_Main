import java.util.*;

public class LocationOfSubstr{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter string : ");
        String str = scan.nextLine();
        System.out.println("Enter substring : ");
        String subStr = scan.nextLine();

        if (str.contains(subStr)){
            System.out.println("Location of the subString : "+str.indexOf(subStr));
        }
        else{
            System.out.println(str+" doesn't contain "+subStr);
        }

    }
}