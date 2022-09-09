import java.util.*;


public class Password{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String password = scan.nextLine();
        int passwordLen  = password.length();
        char[] passwordChar = new char[passwordLen];
        for (int i=0;i<passwordLen;i++){
            passwordChar[i]=password.charAt(i);
        }
        int uc=0,lc=0,d=0;  //uppercase,lowercase,digit
        for (int i=0;i<passwordLen;i++){
            if (Character.isLowerCase(passwordChar[i]))
                lc++;
            else if (Character.isUpperCase(passwordChar[i]))
                uc++;
            else if (Character.isDigit(passwordChar[i]))
                d++;
        }
        if (lc>=3 && uc>=2 && d>=1){
            System.out.println("Valid Password!");
        }
        else{
            System.out.println("Invalid Password!!");
            if (lc<3)   System.out.println("Password doesnot atleast contain 3 lowercase Characters");
            if (uc<2)   System.out.println("Password doesnot atleast contain 2 uppercase Characters");
            if (d<1)    System.out.println("Password doesnot atleast contain 1 digit Characters");
        }
    }
}