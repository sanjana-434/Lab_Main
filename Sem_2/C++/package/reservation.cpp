#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Room;

class Date
{
protected:
    int d,m,y;
public:
    friend istream& operator >>(istream&,Date& );
    friend ostream& operator <<(ostream&,Date& );
};

istream& operator >> (istream& cin,Date& d1)
{
    int f=0;
    do
    {
        if(f==1)
        {
            cout<<endl<<"Invalid date please re-enter";
        }
        cin>>d1.d>>d1.m>>d1.y;
        if(d1.d>31 || d1.d<1 || d1.m>12 || d1.m<1 || d1.y!=2022)
            f=1;
        else
            f=0;
    }while(f!=0);

    return cin;
}
ostream& operator<<(ostream& cout,Date& d1)
{
    cout<<d1.d<<"/"<<d1.m<<"/"<<d1.y<<"/";
    return cout;
}

class Room
{
protected:
    string roomNo;
    int occupied;
    float cost;
public:
    void setdata(string rn,int o,float c)
    {
        roomNo=rn;
        occupied=o;
        cost=c;
    }
    void setoccupied(int ch){occupied=ch;}
    string getRoomNo(){return roomNo;}
    int getoccupied(){return occupied;}
    float getcost(){return cost;}
    friend ostream& operator <<(ostream&,Room& );
};

ostream& operator<<(ostream& cout,Room& r1)
{
    cout<<endl<<"Room number : "<<r1.roomNo;
    //cout<<endl<<"Occupancy : "<<r1.occupied;
    cout<<endl<<"Room cost (per night) : "<<r1.cost;
    return cout;
}

class Reservation
{
protected:
    char type[20];
    Date checkin;
    Date checkout;
    int noOfRooms;
    int noOfPeople;
    Room *r;

public:
    void setdata()
    {
        int d,m,y,f=0;
        do
        {
            if(f==1)
            {
                cout<<endl<<"Enter the room type again";
            }
            cout<<endl<<"Enter the type of room(Delux/Premium/Suit) : ";
            cin>>type;
            if(strcmp(type,"Delux")==0 || strcmp(type,"Premium")==0 || strcmp(type,"Suit")==0 )
                f=0;
            else
                f=1;
        }while(f!=0);
        cout<<endl<<"Enter the check-in date(dd mm yyyy) : ";
        cin>>checkin;
        cout<<endl<<"Enter the check-out date(dd mm yyyy) : ";
        cin>>checkout;
        f=0;
        do
        {
            cout<<endl<<"Enter the number of guests : ";
            cin>>noOfPeople;
        }while(noOfPeople<0);

        do
        {
            if(f==1)
                cout<<endl<<"Number of rooms must be atleast half the number of people!";
            cout<<endl<<"Enter the number of rooms : ";
            cin>>noOfRooms;
            if(noOfPeople%2==0)
            {
                if(noOfRooms<(noOfPeople/2))
                    f=1;
                else
                    f=0;
            }
            else
            {
                if(noOfRooms<(noOfPeople/2)-0.5)
                    f=1;
                else
                    f=0;
            }

        }while(f!=0);
        r=new Room[noOfRooms];
    }
    void allocate()
    {
        Room r1;
        int i=0;
        string rno;
        int occ;
        ifstream file;
        ofstream temp;
        file.open("rooms.bin",ios::binary);
        temp.open("temp.bin",ios::binary|ios::app);
        if (!file){
            cerr<<endl<<"Error opening File!";
            exit(1);
        }
        if(!temp)
        {
            cerr<<endl<<"Error opening File!";
            exit(1);
        }
        else{
            while(!file.eof()){
                file.read((char*)&r1,sizeof(r1));
                occ=r1.getoccupied();
                rno=r1.getRoomNo();
                cout<<endl<<r1;
                if(file){
                        while(i<noOfRooms)
                        {
                            //cout<<endl<<i<<"hete";
                            //cout<<end<<type;
                            if(strcmp(type,"Delux")==0)
                            {
                                if(occ==0 && rno[0]=='D')
                                {
                                    cout<<endl<<rno;
                                    r1.setoccupied(1);
                                    r[i].setdata(rno,1,r1.getcost());
                                    i++;
                                    break;
                                }
                            }

                            else if(strcmp(type,"Premium")==0)
                            {
                                if(occ==0 && rno[0]=='P')
                                {
                                    r1.setoccupied(1);
                                    r[i].setdata(rno,1,r1.getcost());
                                    i++;
                                    break;
                                }
                            }
                            else if(strcmp(type,"Suit")==0)
                            {
                                if(occ==0 && rno[0]=='S')
                                {
                                    cout<<endl<<"1::";
                                    r1.setoccupied(1);
                                    r[i].setdata(rno,1,r1.getcost());
                                    i++;
                                    break;
                                }
                            }
                        temp.write((char*)&r1,sizeof(r1));
                    }
                }
            }
        }
        remove("rooms.bin");
        rename("temp.bin","rooms.bin");
        file.close();
    }
    void display()
    {
        cout<<endl<<"The type of room is : "<<type;
        cout<<endl<<"The number of rooms booked are : "<<noOfRooms;
        cout<<endl<<"The number of guests : "<<noOfPeople;
        cout<<endl<<"Check-in date : "<<checkin;
        cout<<endl<<"Check-out date : "<<checkout;
        for(int i=0;i<noOfRooms;i++)
        {
            cout<<endl<<r[i];
        }
    }
};

int main()
{
    Reservation rv1;
    rv1.setdata();
    rv1.allocate();
    rv1.display();
}





