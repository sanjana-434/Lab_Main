import java.util.*;

public class PigLatin{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter word : ");
        StringBuffer word = new StringBuffer(scan.nextLine());
        StringBuffer pigLatin = new StringBuffer("");
        for (int i=0;i<word.length();i++){
            if (word.charAt(i)=='a' || word.charAt(i)=='e' || word.charAt(i)=='i' || word.charAt(i)=='o' ||word.charAt(i)=='u'|| word.charAt(i)=='y' ){
                pigLatin.append(word.substring(i));
                pigLatin.append(word.substring(0,i));
                pigLatin.append("ay");
                break;
            }
        }
        System.out.println("Pig Latin : "+pigLatin);

    }
}