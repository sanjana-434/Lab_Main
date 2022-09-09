import java.util.*;

public class ReverseVowelWords{
    public static void  main(String args[]){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        str = str.trim();
        String[] splitStr = str.split(" ");
        int splitStrLen = splitStr.length;
        String result=" ";
        for (int i=0; i<splitStrLen ;i++){
            if (splitStr[i].contains("a")||splitStr[i].contains("e")||splitStr[i].contains("i")||splitStr[i].contains("o")||splitStr[i].contains("u")){
                StringBuilder sb = new StringBuilder(splitStr[i]);
                sb.reverse();
                result= result+sb+" ";
            }
            else{
                result = result + splitStr[i]+" ";
            }
        }
        result = result.trim();
        System.out.println("The resultant String : "+result);
    }
}