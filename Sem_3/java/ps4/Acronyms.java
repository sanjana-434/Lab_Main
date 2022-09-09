import java.util.*;

public class Acronyms{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter the string for which acronym is to be found : ");
        String str = scan.nextLine();
        String[] splitStr = str.split(" ");
        System.out.println("Acronym for "+str+" : ");
        System.out.printf("%c",Character.toUpperCase((splitStr[0].charAt(0))));
        System.out.printf("%c",Character.toUpperCase((splitStr[1].charAt(0))));
        System.out.printf("%c",Character.toUpperCase((splitStr[2].charAt(0))));
    }
}