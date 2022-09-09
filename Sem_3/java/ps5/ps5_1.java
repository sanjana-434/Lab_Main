import java.util.*;

public class Room{
    int roomNo;
    String roomType;
    float roomArea;
    int occupied_delux[] = new int[10];
    int occupied_studio[] = new int[10];
    public setData(String t){
        roomType = t;
        if (roomType.isEqual("delux")){
            for (int i=0;i<10;i++){
                if (occupied_delux[i]==0){
                    roomNo = 100+i;
                    occupied_delux[i]=1;
                    break;
                }
            }
            roomArea = 1000.2;
        }
        else{
            for (int i=0;i<10;i++){
                if (occupied_studio[i]==0){
                    roomNo = 200+i;
                    occupied_delux[i]=1;
                    break;
                }
            }
            roomArea = 525;
        }
    }
    public displayData(){
        System.out.println("Room No : "+roomNo+"\n"+"Room Type : "+roomType+"\n"+"Room Area : "+roomArea);
    }
}
public class ps5_1{
    public static void main(String args[]){
        Room r1;
        int ch;
        String roomType;
        Scanner scan = new Scanner(System.in);

        do{
            System.out.println("Book a room? Enter 0 to exit");
            ch = scan.nextInt();
            if (ch == 0){
                break;
            }
            else{
                do{
                    System.out.println("Enter room Type : (delux/studio) ");
                    roomType = scan.nextLine();
                }while(!(roomType.isEqual("delux") || roomType.isEqual("studio")));
                r1.setData(roomType);
                r1.displayData();
            }
        }while(ch!=0);
    }
}