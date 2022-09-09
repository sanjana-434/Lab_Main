import java.util.*;

public class CountAlphabets{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a String : ");
        String str = scan.nextLine();
        str = str.toLowerCase();
        int strLen = str.length();
        int[]  count = new int[26];
        for (int i=0;i<strLen;i++){
            if (Character.isAlphabetic((str.charAt(i)))){
                count[(int)str.charAt(i)-97]++;
            }
        }
        System.out.println("Alphabet"+" |   "+"count");
        System.out.println("-------------------");
        for (int i=0;i<26;i++){
            System.out.println(((char)(97+i)) +"\t |\t"+count[i]);
        }
        
    }
}