#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

class Login;
class User;
class Permission;
class reservation;
class Date;
class RoomOverall;
class Room;

void addUserDetail(User u);
int Login_checkPassword(char* id,char* pass);
int Login_checkUserID(char* id);
void displayRecords();
int dateToDays(int d,int m,int y);
void afterLogin(User u);
void bookRoom(User u);
void roomDetails();

class Login{
protected:
    char login_id[20];
    char login_username[20];
    char password[20];
public:
    void setData(char* id,char* name,char* pass){
        strcpy(login_id,id);
        strcpy(login_username,name);
        strcpy(password,pass);
    }
    char* getPassword(){
        return password;
    }
};


class Permission{
protected:
    char per_id[20];
    char per_name[20];
    char per_role_id[20];
public:
    void setData(char* id,char* name,char* role){
        strcpy(per_id,id);
        strcpy(per_name,name);
        strcpy(per_role_id,role);
    }
};


class User{
protected:
    char user_id[20];
    char user_name[20];
    char user_mobile[10];
    char user_email[30];
    char user_address[50];
    Login login;
    Permission permission;
public:
    void createNewAccount(){
        char password1[20];
        char password2[20];
        int flag; 
        int ch2;
        cout<<endl<<"Create New Account";
        cout<<endl<<"------------------";
        cout<<endl<<"User ID   :  ";
        cin>>user_id;
        cout<<endl<<"User Name   :  ";
        cin>>user_name;
        flag=0;
        do{
            if (flag!=0){
                cout<<endl<<"Invalid password ! Enter again";
            }
            cout<<endl<<"Password  :  ";
            cin>>password1;
            cout<<endl<<"Re-enter password   :  ";
            cin>>password2; 
            flag++;
        }while(strcmp(password1,password2)!=0);
        cout<<endl<<"Mobile number   :  ";
        cin>>user_mobile;
        cout<<endl<<"Email ID  :  ";
        cin>>user_email;
        cout<<endl<<"Address  :  ";
        cin>>user_address;
        flag=0;
        do{
            if ( flag!=0){
                cout<<endl<<"Invalid input ! Enter again";
            }
            cout<<endl<<"You are : ";
            cout<<endl<<"1) Customer";
            cout<<endl<<"2) Admin"<<endl;
            cin>>ch2;
            char role1[20]="Customer";
            char role2[20]="Admin";
            if (ch2==1){
                permission.setData(user_id,user_name,role1);
            }
            else if(ch2==2){
                permission.setData(user_id,user_name,role2);
            }
            flag++;
        }while(!(ch2==1 || ch2==2));
        login.setData(user_id,user_name,password1);
    }
    int loginAccount(){
        char id[20];
        char pass[20];

        cout<<endl<<"Enter User ID  :  ";
        cin>>id;
        if (!Login_checkUserID(id)){
            cout<<endl<<"No such user ID exist !";
            return 0;
        }
        cout<<endl<<"Enter password  :  ";
        cin>>pass;
        if (!Login_checkPassword(id,pass)){
            cout<<endl<<"Invalid Password !";
            return 0;
        }
        return 1;
    }

    char* getUserID(){
        return user_id;
    }
    char* getPassword(){
        return login.getPassword();
    }
    void display(){
        cout<<endl<<user_id<<" "<<user_name<<" "<<user_mobile<<" "<<user_email<<" "<<user_address;
        cout<<endl<<login.getPassword();
    }
};


class Date
{
protected:
    int d,m,y;
public:
    void setDate();
    int getday();
    int getmonth();
    int getyear();
};

void Date::setDate()
{
    int f=0;
    do
    {
        if(f==1)
        {
            cout<<endl<<"Invalid date please re-enter";
        }
        cin>>d>>m>>y;
        if(d>31 || d<1 || m>12 || m<1 || y!=2022)
            f=1;
        else
            f=0;
    }while(f!=0);
}
int Date::getday() 
{
    return d;
}
int Date::getmonth() 
{
    return m;
}
int Date::getyear() 
{
    return y;
}


class RoomOverall{
    char roomNo[4];
    int occupied[365];
    char type[10];
    float cost;
public:
    char* getRoomNo(){
        return roomNo;
    }
    int* getOccupied(){
        return occupied;
    }
    char* getType(){
        return type;
    }
    float getCost(){
        return cost;
    }
    void setoccupied(int* o){
        for (int i=0;i<365;i++){
            occupied[i]=o[i];
        }
    }
    void display(){
        cout<<endl<<roomNo<<"    "<<type<<"    "<<cost<<"    "<<occupied[171]<<occupied[174]<<occupied[172]<<occupied[173];
    }
    void setData(char* rn,char* t,float c){
        strcpy(roomNo,rn);
        strcpy(type,t);
        cost=c;
    }
};


class Room{
protected:
    char roomNo[4];
    float cost;
    char type[20];
public:
    void setRoomNo(char* r){
        strcpy(roomNo,r);
    }
    void setCost(float c){
        cost=c;
    }
    void setType(char* t){
        strcpy(type,t);
    }
    char* getRoomNo(){
        return roomNo;
    }
    float getCost(){
        return cost;
    }
    char* getType(){
        return type;
    }
};


class reservation{
protected:
    char r_id[20];
    Date checkIn;
    Date checkOut;
    Room room;
public:
    void display(){
        cout<<endl<<"User Id  : " <<r_id;
        cout<<endl<<"CheckIn  : "<<checkIn.getday()<<"."<<checkIn.getmonth()<<"."<<checkIn.getyear();
        cout<<endl<<"CheckOut : "<<checkOut.getday()<<"."<<checkOut.getmonth()<<"."<<checkOut.getyear();
        cout<<endl<<"Room     : "<<room.getRoomNo();
        cout<<endl<<"Cost     : "<<room.getCost();
        cout<<endl<<"Type     : "<<room.getType();
    }
    void setId(char* id){
        strcpy(r_id,id);
    }
    void setCheckIn(){
        checkIn.setDate();
    }
    void setCheckOut(){
        do{
            int flag=0;
            checkOut.setDate();
            if (checkIn.getmonth()<checkOut.getmonth()){
                break;
            }
            else if((checkIn.getmonth()==checkOut.getmonth()) && checkIn.getday()<checkOut.getday()){
                break;
            }
            else{
                cout<<endl<<"Invalid Check Out date ! Enter Again";
            }
        }while(1);
    }
    void setRoom(char* rn,float c,char* t){
        room.setRoomNo(rn);
        room.setCost(c);
        room.setType(t);
    }
    int getday_checkIn(){
        return checkIn.getday();
    }
    int getmonth_checkIn(){
        return checkIn.getmonth();
    }
    int getyear_checkIn(){
        return checkIn.getyear();
    }
    int getday_checkOut(){
        return checkOut.getday();
    }
    int getmonth_checkOut(){
        return checkOut.getmonth();
    }
    int getyear_checkOut(){
        return checkOut.getyear();
    }
};



fstream f;
fstream f2;
User u;
User u_ptr;


int Login_checkPassword(char* id,char* pass){
    int flag=0;
    f.open("userDetails.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening File !";
        exit(1);
    }
    else{
        while(f.read((char*)&u,sizeof(u))){
            if (strcmp(u.getUserID(),id)==0 && strcmp(u.getPassword(),pass)==0){
                flag=1;
                break;
            }
        }
    }
    f.close();
    return flag;
}

int Login_checkUserID(char* id){
    int flag=0;
    f.open("userDetails.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening File !";
        exit(1);
    }
    else{
        while(f.read((char*)&u,sizeof(u))){
            if (!strcmp(u.getUserID(),id)){
                flag=1;
                break;
            }
        }
    }
    f.close();
    return flag;
}

void addUserDetail(User u){
    u.createNewAccount();
    f.open("userDetails.bin",ios::binary|ios::out|ios::app);
    if (!f){
        cerr<<endl<<"Error opening File !";
        exit(1);
    }
    else{
        f.write((char*)&u,sizeof(u));
    }
    f.close();
}

void displayRecords(){
    f.open("userDetails.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening File !";
        exit(1);
    }
    else{
        while(f.read((char*)&u,sizeof(u)))
            u.display();
    }
    f.close();

}


int main(){
    
    int ch;
    int checkLogin;
    do{
        cout<<endl<<"-------------------------------------------";
        cout<<endl<<"What do you wanna choose ? Enter 0 to exit";
        cout<<endl<<"-------------------------------------------";
        cout<<endl<<"1) Login ";
        cout<<endl<<"2) Create a new account";
        cout<<endl<<"3) Display"<<endl;
        cin>>ch;
        switch(ch){
            case 1: 
                    checkLogin=u.loginAccount();
                    if (checkLogin==1){
                        cout<<endl<<"Login successful"<<endl;
                        afterLogin(u);
                    }
                    else{
                        cout<<endl<<"Login unsuccessful"<<endl;
                    }
                    break;
            case 2: 
                    addUserDetail(u);
                    break;
            case 3:
                    displayRecords();
                    break;

        }
    }while(ch!=0);
    
    
}

void afterLogin(User u){
    int ch;
    //int noOfPeople;
    do{
        cout<<endl<<"-------------------------------------------";
        cout<<endl<<"What do you wanna choose ? Enter 0 to exit";
        cout<<endl<<"-------------------------------------------";
        cout<<endl<<"1) View Room Details";
        cout<<endl<<"2) Book a Room"<<endl;
        cin>>ch;
        switch(ch){
            case 1: roomDetails();
                    break;
            case 2: bookRoom(u);
                    break;
        }

    }while(ch!=0);
}

void roomDetails(){
    cout<<endl<<"-----------------------------------------";
    cout<<endl<<setw(20)<<"Type of Room"<<setw(20)<<"Cost";
    cout<<endl<<"-----------------------------------------";
    cout<<endl<<setw(20)<<"Suit"<<setw(20)<<"15,000";
    cout<<endl<<setw(20)<<"Premium"<<setw(20)<<"10,000";
    cout<<endl<<setw(20)<<"Delux"<<setw(20)<<"7,000";
    cout<<endl<<"-----------------------------------------";
    cout<<endl<<endl;
    cout<<endl<<"=========================================";
    cout<<endl<<"Note : Only 3 people per room";
    cout<<endl<<"=========================================";
}

void bookRoom(User u){
    int flag=0;
    int* occupied;
    reservation res;
    RoomOverall roa;
    cout<<endl<<"=============================================";
    cout<<endl<<"               ROOM BOOKING";
    cout<<endl<<"=============================================";
    res.setId(u.getUserID());
    cout<<endl<<"Enter CheckIn date  :  ";
    res.setCheckIn();
    cout<<endl<<"Enter CheckOut date :  ";
    res.setCheckOut();
    
    int ch;
    char typeUWant[20];
    do{
        cout<<endl<<"Choose the type of room you want : ";
        cout<<endl<<"1) Suit";
        cout<<endl<<"2) Premium";
        cout<<endl<<"3) Delux"<<endl;
        cin>>ch;
        switch(ch){
            case 1: strcpy(typeUWant,"suit");
                    break;
            case 2: strcpy(typeUWant,"premium");
                    break;
            case 3: strcpy(typeUWant,"delux");
                    break;
            default: cout<<endl<<"Invalid choice. Enter again";
        }
    }while(!(ch==1 || ch==2 || ch==3));

    //convert date in days w.r.t years
    int checkIn_inDays=dateToDays(res.getday_checkIn(),res.getmonth_checkIn(),res.getyear_checkIn());
    cout<<endl<<"Check IN  : " <<checkIn_inDays;
    int checkOut_inDays=dateToDays(res.getday_checkOut(),res.getmonth_checkOut(),res.getyear_checkOut());
    cout<<endl<<"Check OUt  : " <<checkOut_inDays;

    //check availability
    char* roomNo[4];
    f.open("rooms.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening file !";
        exit(1);
    }
    else{
        while(f.read((char*)&roa,sizeof(roa))){
            if (strcmp(roa.getType(),typeUWant)==0){
                //cout<<endl<<"#####"<<roa.getRoomNo();
                flag=0;
                occupied=roa.getOccupied();
                for (int i=checkIn_inDays; i<=checkOut_inDays; i++){
                    if (occupied[i]==0){
                        flag++;
                    }
                }
                //cout<<endl<<"&&&&"<<flag;
                if (flag == (checkOut_inDays-checkIn_inDays+1)){
                    res.setRoom(roa.getRoomNo(),roa.getCost(),roa.getType());
                    f2.open("bookRoom.bin",ios::binary|ios::app|ios::out);
                    f2.write((char*)&res,sizeof(res));
                    f2.close();
                    break;
                }
            }
        }
    }
    f.close();

    RoomOverall r;
    //modify Room with updated occupied
    if (flag == (checkOut_inDays-checkIn_inDays+1)){
        //booking room - making occupied 0 to 1
        for (int i=checkIn_inDays; i<=checkOut_inDays; i++){
            occupied[i]=1;
        }
        roa.setoccupied(occupied);
        cout<<"****";
        roa.display();              //just for checking

        f.open("rooms.bin",ios::binary|ios::in);
        f2.open("temp.bin",ios::binary|ios::out);
        while(f.read((char*)&r,sizeof(r))){
            cout<<"&&"<<endl;
            r.display();
            if (!strcmp(roa.getRoomNo(),r.getRoomNo())){
                cout<<"***&&&"<<endl<<endl;
                roa.display();
                f2.write((char*)&roa,sizeof(roa));
            }
            else{
                f2.write((char*)&r,sizeof(r));
            }
        }
        f.close();
        f2.close();

        remove("rooms.bin");
        rename("temp.bin","rooms.bin");
        cout<<endl<<"Room booked Successfully !"<<endl;
        cout<<endl<<"---------------------";
        cout<<endl<<"Your Booking Details";
        cout<<endl<<"---------------------";
        res.display();
    }
    else{
        cout<<endl<<"Room Unavailable";
    } 

    f.open("rooms.bin",ios::binary|ios::in);
    while(f.read((char*)&r,sizeof(r))){
        r.display();
    }
    f.close();
    
    /*
    f.open("bookRoom.bin",ios::binary|ios::in);
    if (!f){
        cerr<<endl<<"Error opening file !";
        exit(1);
    }
    else{
        cout<<"1)  ";
        while(f.read((char*)&res,sizeof(res))){
            cout<<"2)  ";
            res.display();
        }
    }
    f.close();
    */
}

int dateToDays(int d,int m,int y){
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i=0;i<m-1;i++){
        d+=days[i];
    }
    return d;
}