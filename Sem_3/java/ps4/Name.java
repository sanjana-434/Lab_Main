import java.util.*;

public class Name{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String name = scan.nextLine();
        int nameLen = name.length();
        boolean nameContainsa = name.contains("a");
        if (nameContainsa==false){
            System.out.println("Name doesn't contain \"a\"");
        }
        else{
            System.out.println("Locations at which \"a\" is placed : ");
            char[] nameChars = new char[nameLen];
            for (int i=0;i<nameLen;i++){
                nameChars[i] = name.charAt(i);
                if (nameChars[i]=='a'){
                    System.out.println(i);
                }
            }
        }
    }
}