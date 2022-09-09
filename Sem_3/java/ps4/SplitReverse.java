import java.util.Scanner;

public class SplitReverse{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        String[] splitedStr = str.split(" ");
        int lenStr = splitedStr.length;
        System.out.println("Printing splited string in reverse order : ");
        for (int i=lenStr-1 ; i>=0 ; i--){
            System.out.println(splitedStr[i]);
        }
    }
}