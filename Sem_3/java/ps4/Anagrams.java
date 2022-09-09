import java.util.*;

public class Anagrams{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter string 1 : ");
        String str1 = scan.nextLine();
        System.out.println("Enter string 2 : ");
        String str2 = scan.nextLine();
        str1 = str1.replaceAll("\\p{Punct}", "");
        str2 = str2.replaceAll("\\p{Punct}", "");
        str1 = str1.replaceAll(" ", "");
        str2 = str2.replaceAll(" ", "");
        char[] str1Char = str1.toCharArray();
        char[] str2Char = str2.toCharArray();
        Arrays.sort(str1Char);
        Arrays.sort(str2Char);
        String string1 = new String(str1Char);
        String string2 = new String(str2Char);
        //System.out.println(string1+ "   "+string2 );
        if (string1.equalsIgnoreCase(string2)){
            System.out.println("Anagrams!");
        }
        else{
            System.out.println("Not an Anagram");
        }
    }
}