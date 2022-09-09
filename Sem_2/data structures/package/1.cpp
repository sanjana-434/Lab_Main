#include <iostream>
#include <cstring>
#include <conio.h>++
#include <fstream>
#include <stdlib.h>

using namespace std;

fstream file; 

class stalkTab{
    char stalker[20];
    char stalkedPerson[20];
public:
    char* getStalker(){
        return stalker;
    }
    char* getStalkedPerson(){
        return stalkedPerson;
    }
    void setData(char* s1,char* s2){
        strcpy(stalker,s1);
        strcpy(stalkedPerson,s2);
    }

};

//for file use
class data_Vertex{
    char id[20];
    char name[20];
    char pass[20];
    char dob[20];
    char institution[20];
    char native[20];
public:
    void setData(){
        cout<<"*";
        cin>>id>>name>>pass>>dob>>institution>>native;
    }
    void display(){
        cout<<endl<<id<<" "<<name<<" "<<pass<<" "<<dob<<" "<<institution<<" "<<native;
    }
    char* return_id(){
        return id;
    }
    char* return_name(){
        return name;
    }
    char* return_pass(){
        return pass;
    }
    char* return_dob(){
        return dob;
    }
    char* return_institution(){
        return institution;
    }
    char* return_native(){
        return native;
    }
};

class followers{
    char s1[20];
    char s2[20];
public: 
    void setData(const char* a,const char* b){
        strcpy(s1,a);
        strcpy(s2,b);
    }
    void display(){
        cout<<endl<<s1<<"  "<<s2;
    }
    char* gets1(){
        return s1;
    }
    char* gets2(){
        return s2;
    }
};

//declarations
class Biodata;
class Vertex;

class Edge{
public:
    char userName_Edge[20];
    char ID_Edge[20];
    Edge* link_Edge;
};

class Biodata{
public:
    char dob[20];
    char institution[20];
    char native[20];
    Biodata(){
        strcpy(dob," ");
        strcpy(institution," ");
        strcpy(native," ");
    }
};

class Vertex{
public:
    char userName_Vertex[20];
    char ID_Vertex[20];
    char password_Vertex[20];
    Biodata bio_Vertex;
    Edge* linkToEdge_Vertex;
    Vertex* linkToVertex_Vertex;
};

class Graph{

private:
    Vertex* start,* ptr_v,*ptrLogin;          //ptrLogin - poiinter to login ID
    Edge* ptr_e;

public:
    Graph(){
        start=NULL;
        ptr_v=NULL;
        ptrLogin=NULL;
    }

    void createVertex(){
        int i=0;
        Vertex* v=new Vertex;
        char old_password[20]="";
        char new_password[20]="";
        cout<<endl<<"Enter ID (no space)  : ";
        cin>>v->ID_Vertex;
        cout<<endl<<"Enter User Name      : ";
        cin>>v->userName_Vertex;
        do{
            if (i!=0){
                cout<<endl<<"Passwords doesnot match ! Enter Again";
            }
            cout<<endl<<"Enter password       : ";
            cin>>old_password;
            cout<<endl<<"Renter Password      : ";
            cin>>new_password;
            i++;
        }while(strcmp(old_password,new_password)!=0);

        strcpy(v->password_Vertex,old_password);
        cout<<endl<<"\nAccount Created Successfully !"<<endl;
        char ch;
        cout<<endl<<"Do you want to update your Bio Data (y/n) : ";
        cin>>ch;
        if (ch=='y'){
            cout<<endl<<"Bio Data";
            cout<<endl<<"========";
            cout<<endl<<"DOB         : ";
            cin>>v->bio_Vertex.dob;
            //cin.ignore(1000,'\n');
            cout<<endl<<"Institution : ";
            cin>>v->bio_Vertex.institution;
            cout<<endl<<"Native      : ";
            cin>>v->bio_Vertex.native;
        }

        v->linkToEdge_Vertex=NULL;
        v->linkToVertex_Vertex=NULL;
        start=v;
    }

    void viewFollowers(){
        if (ptrLogin->linkToEdge_Vertex==NULL){
            cout<<endl<<"You have no Followers";
        }
        else{
            cout<<endl<<"Followers";
            cout<<endl<<"---------";
            ptr_e=ptrLogin->linkToEdge_Vertex;
            while(ptr_e!=NULL){
                cout<<endl<<ptr_e->ID_Edge;
                ptr_e=ptr_e->link_Edge;
            }
        }
    }

    void viewFollowing(){
        cout<<endl<<"Following";
        cout<<endl<<"---------";
        ptr_v=start;
        while(ptr_v!=NULL){
            ptr_e=ptr_v->linkToEdge_Vertex;
            while(ptr_e!=NULL){
                if (strcmp(ptrLogin->userName_Vertex,ptr_e->userName_Edge)==0){
                    cout<<endl<<ptr_v->ID_Vertex;
                    break;
                }
                ptr_e=ptr_e->link_Edge;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }
    }

    void PeopleWhoYouDontFollowBack(){
        int flag=0;
        Edge* p=new Edge;                         //another pointer like ptr_e
        if (ptrLogin->linkToEdge_Vertex==NULL){
            cout<<endl<<"You have no Followers";
        }
        else{
            cout<<endl<<"People who you don't Follow Back";
            cout<<endl<<"--------------------------------";
            char id[20];
            ptr_e=ptrLogin->linkToEdge_Vertex;
            while(ptr_e!=NULL){
                strcpy(id,ptr_e->ID_Edge);
            
                ptr_v=start;
                while(ptr_v!=NULL){
                    if (strcmp(ptr_v->ID_Vertex,id)==0){
                        p=ptr_v->linkToEdge_Vertex;
                        flag=0;
                        while(p!=NULL){
                            if (strcmp(p->ID_Edge,ptrLogin->ID_Vertex)==0){
                                flag=1;
                                break;
                            }
                            p=p->link_Edge;
                        }
                        if (flag==0){
                            cout<<endl<<ptr_v->ID_Vertex;
                        }
                    }
                    ptr_v=ptr_v->linkToVertex_Vertex;
                }
                ptr_e=ptr_e->link_Edge;
            }
        }
    }

    void peopleYouMayKnow(){
        Edge* p=new Edge;
        Edge* ed=new Edge;
        Vertex* vd=new Vertex;    //people you may know with vertex vd and Edge ed
        vd->linkToEdge_Vertex=NULL;
        int flag=0;
        char id[20];
        ptr_e=ptrLogin->linkToEdge_Vertex;
        while(ptr_e!=NULL){
            strcpy(id,ptr_e->ID_Edge);
            
            ptr_v=start;
            while(ptr_v!=NULL){
                if (strcmp(ptr_v->ID_Vertex,id)==0){
                    p=ptr_v->linkToEdge_Vertex;
                    flag=0;
                    while(p!=NULL){
                        if (strcmp(p->ID_Edge,ptrLogin->ID_Vertex)==0){
                            flag=1;
                            break;
                        }
                        p=p->link_Edge;
                    }
                    if (flag==0){
                        if(vd->linkToEdge_Vertex==NULL){
                            strcpy(ed->ID_Edge,ptr_v->ID_Vertex);
                            ed->link_Edge=NULL;
                            vd->linkToEdge_Vertex=ed;
                        }
                        else{
                            ed=new Edge;
                            strcpy(ed->ID_Edge,ptr_v->ID_Vertex);
                            ed->link_Edge=NULL;
                            p=vd->linkToEdge_Vertex;
                            while(p->link_Edge!=NULL){
                                p=p->link_Edge;
                            }
                            p->link_Edge=ed;
                        }
                    }
                }
                ptr_v=ptr_v->linkToVertex_Vertex;
            }
            ptr_e=ptr_e->link_Edge;
        }

        //displaying 
        cout<<endl<<"People you may know";
        cout<<endl<<"--------------------"<<endl;
        p=vd->linkToEdge_Vertex;
        while(p!=NULL){
            cout<<endl<<p->ID_Edge;
            p=p->link_Edge;
        }

        //
        char ch;
        char id2[20];
        int i=0;
        cout<<endl<<"Do you want to follow any of them (y/n) ? ";
        cin>>ch;
        if (ch=='y'){
            do{
                if (i!=0){
                    cout<<endl<<"User ID not found ! Enter Again";
                }
                cout<<endl<<"Enter user ID : ";
                cin>>id2;
                i++;
            }while(!checkIfVertexAlreadyExist(id2));
            followSomeOne(ptrLogin->ID_Vertex,id2);            
        }

    }

    void PeopleWhoDontFollowYouBack(){
        int flag=1;
        Edge* p=new Edge;                       //another pointer like ptr_e
        char id[20];
        ptr_v=start;
        while(ptr_v!=NULL){
            ptr_e=ptr_v->linkToEdge_Vertex;
            while(ptr_e!=NULL){
                strcpy(id,ptr_e->ID_Edge);
                if (strcmp(id,ptrLogin->ID_Vertex)==0){
                    p=ptrLogin->linkToEdge_Vertex;
                    flag=1;
                    while(p!=NULL){
                        if (strcmp(ptr_v->ID_Vertex,p->ID_Edge)==0){
                            flag=0;
                            break;
                        }
                        p=p->link_Edge;
                    }
                    if (flag==1){
                        cout<<endl<<ptr_v->ID_Vertex;
                    }
                }
                ptr_e=ptr_e->link_Edge;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }

    }

    void createVertex(const char* id,const char* user,const char* pass,const char* d,const char* i,const char* n){
        Vertex* v=new Vertex;
        strcpy(v->ID_Vertex,id);
        strcpy(v->userName_Vertex,user);
        strcpy(v->password_Vertex,pass);
        strcpy(v->bio_Vertex.dob,d);
        strcpy(v->bio_Vertex.institution,i);
        strcpy(v->bio_Vertex.native,n);
        v->linkToEdge_Vertex=NULL;
        v->linkToVertex_Vertex=NULL;
        start=v;
    }

    void insertVertex(const char* id,const char* user,const char* pass,const char* d,const char* i,const char* n){
        if (start==NULL){
            createVertex(id,user,pass,d,i,n);
        }
        else{
            Vertex* v=new Vertex;
            strcpy(v->ID_Vertex,id);
            strcpy(v->userName_Vertex,user);
            strcpy(v->password_Vertex,pass);
            strcpy(v->bio_Vertex.dob,d);
            strcpy(v->bio_Vertex.institution,i);
            strcpy(v->bio_Vertex.native,n);
            v->linkToEdge_Vertex=NULL;
            v->linkToVertex_Vertex=NULL;
            ptr_v=start;
            while(ptr_v->linkToVertex_Vertex!=NULL){
                ptr_v=ptr_v->linkToVertex_Vertex;
            }
            ptr_v->linkToVertex_Vertex=v;
        }

    }

    void viewStalkers(){
        stalkTab st;
        int flag=0;
        file.open("stalkTab.bin",ios::binary|ios::in);
        if (!file){
            cerr<<endl<<"Error opening file ";
            exit(1);
        }
        else{
            cout<<endl<<"Stalkers";
            cout<<endl<<"--------";
            while(file.read((char*)&st,sizeof(st))){
                if (strcmp(st.getStalkedPerson(),ptrLogin->ID_Vertex)==0){
                    flag=1;
                    cout<<endl<<st.getStalker();
                }
            }
            if (flag==0){
                cout<<endl<<"No stalkers";
            }
        }
        file.close();
    }


    void searchUser(){
        char id[20];
        int flag1=0,flag2=0;
        char ch;
        cout<<endl<<"Enter userID you want to search : ";
        cin>>id;
        if (checkIfVertexAlreadyExist(id)){
            cout<<endl<<"UserID Found"<<endl;
            cout<<endl<<"Do you want to view "<<id<<" Status (y/n) ? ";
            cin>>ch;
            if (ch=='y'){

                stalkTab st,st1;
                st.setData(ptrLogin->ID_Vertex,id);
                file.open("stalkTab.bin",ios::binary|ios::out|ios::app);
                file.write((char*)&st,sizeof(st));
                file.close();
                /*
                file.open("stalkTab.bin",ios::binary|ios::in);
                while(file.read((char*)&st1,sizeof(st))){
                    cout<<endl<<"###"<<st1.getStalker()<<"   "<<st1.getStalkedPerson();
                }
                file.close();
                */
                //whether user is follwing me/not
                ptr_e=ptrLogin->linkToEdge_Vertex;
                while(ptr_e!=NULL){
                    if(!strcmp(ptr_e->ID_Edge,id)){
                        cout<<endl<<id<<" follows you\n";
                        flag1=1;
                        break;
                    }
                    ptr_e=ptr_e->link_Edge;
                }
                if (flag1==0){
                    cout<<endl<<id<<" doesnot follow you\n";
                }

                //to check if i follow the given user
                ptr_v=start;
                while(ptr_v!=NULL){
                    if (strcmp(ptr_v->ID_Vertex,id)==0){
                        ptr_e=ptr_v->linkToEdge_Vertex;
                        while(ptr_e!=NULL){
                            if (strcmp(ptr_e->ID_Edge,ptrLogin->ID_Vertex)==0){
                                flag2=1;
                                cout<<endl<<"You follow "<<id<<endl;
                                break;
                            }
                            ptr_e=ptr_e->link_Edge;
                        }
                    }
                    ptr_v=ptr_v->linkToVertex_Vertex;
                }
                if (flag2==0){
                    cout<<endl<<"You don't follow "<<id<<endl;
                }
                //printing bio data
                ptr_v=start;
                while(ptr_v!=NULL){
                    if (strcmp(ptr_v->ID_Vertex,id)){
                        break;
                    }
                    ptr_v=ptr_v->linkToVertex_Vertex;
                }
                cout<<endl<<"Bio Data of user "<<id;
                cout<<endl<<"----------------------";
                cout<<endl<<"DOB         : "<<ptr_v->bio_Vertex.dob;
                cout<<endl<<"Institution : "<<ptr_v->bio_Vertex.institution;
                cout<<endl<<"Native      : "<<ptr_v->bio_Vertex.native;
            }
        }
        else{
            cout<<endl<<"UserID not Found"<<endl;
        }
        
    }

    void insertVertex(){
        int i=0;
        Vertex* v=new Vertex;
        char old_password[20]="";
        char new_password[20]="";
        int check;
        if (start==NULL){
            createVertex();
        }
        else{
            do{
                cout<<endl<<"Enter ID (no space)  : ";
                cin>>v->ID_Vertex;
                check=checkIfVertexAlreadyExist(v->ID_Vertex);
                if (check==1)
                    cout<<endl<<"User ID exists already ! Try giving some other ID";
            }while(check==1);

            cout<<endl<<"Enter User Name      : ";
            cin>>v->userName_Vertex;
            do{
                if (i!=0){
                    cout<<endl<<"Passwords doesnot match ! Enter Again";
                }
                cout<<endl<<"Enter password       : ";
                cin>>old_password;
                cout<<endl<<"Renter Password      : ";
                cin>>new_password;
                i++;
            }while(strcmp(old_password,new_password)!=0);

            strcpy(v->password_Vertex,old_password);
            cout<<endl<<"\nAccount Created Successfully !"<<endl;

            char ch;
            cout<<endl<<"Do you want to update your Bio Data (y/n) : ";
            cin>>ch;
            if (ch=='y'){
                cout<<endl<<"Bio Data";
                cout<<endl<<"========";
                cout<<endl<<"DOB         : ";
                cin>>v->bio_Vertex.dob;
                cin.ignore(1000,'\n');
                cout<<endl<<"Institution : ";
                cin>>v->bio_Vertex.institution;
                cout<<endl<<"Native      : ";
                cin>>v->bio_Vertex.native;
            }
            v->linkToEdge_Vertex=NULL;
            v->linkToVertex_Vertex=NULL;
            ptr_v=start;
            while(ptr_v->linkToVertex_Vertex!=NULL){
                ptr_v=ptr_v->linkToVertex_Vertex;
            }
            ptr_v->linkToVertex_Vertex=v;
        }
    }

    int checkIfVertexAlreadyExist(const char* id){
        ptr_v=start;
        bool flag=0;
        while(ptr_v!=NULL){
            if (strcmp(ptr_v->ID_Vertex,id)==0){
                return 1;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }
        return 0;
    }

    void followSomeOne(const char* id1,const char* id2){    
        //id1 - Vertex to which edge is to be added
        //id2 - whom id1 wants to follow
        int flag=0;          //to find duplicate follower
        Edge* e=new Edge;
        Vertex* ptrlogin=new Vertex;
        ptr_v=start;
        while(ptr_v!=NULL){
            if (strcmp(ptr_v->ID_Vertex,id1)==0){
                ptrlogin=ptr_v;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }
        if (checkIfVertexAlreadyExist(id2)){
            ptr_v=start;
            while(ptr_v!=NULL){
                if(strcmp(ptr_v->ID_Vertex,id2)==0){
                    strcpy(e->ID_Edge,ptrlogin->ID_Vertex);
                    strcpy(e->userName_Edge,ptrlogin->userName_Vertex);
                    e->link_Edge=NULL;
                    if (ptr_v->linkToEdge_Vertex==NULL){
                        ptr_v->linkToEdge_Vertex=e;
                    }
                    else{
                        ptr_e=ptr_v->linkToEdge_Vertex;
                        while(ptr_e->link_Edge!=NULL){
                            if (strcmp(ptr_e->ID_Edge,id2)==0)
                                flag=1;
                            ptr_e=ptr_e->link_Edge;

                        }
                        if (flag==0)
                            ptr_e->link_Edge=e;
                    }
                    break;
                }
                ptr_v=ptr_v->linkToVertex_Vertex;
            }
        }
        else{
            cout<<endl<<"No such userId exists"<<endl;
        }
    }

   

    void followSomeOne(){
        int flag=0;          //to find duplicate follower
        Edge* e=new Edge;
        char id[20];
        cout<<endl<<"Enter the userID you want to follow : ";
        cin>>id;
        if (checkIfVertexAlreadyExist(id)){
            ptr_v=start;
            while(ptr_v!=NULL){
                if(strcmp(ptr_v->ID_Vertex,id)==0){
                    strcpy(e->ID_Edge,ptrLogin->ID_Vertex);
                    strcpy(e->userName_Edge,ptrLogin->userName_Vertex);
                    e->link_Edge=NULL;
                    if (ptr_v->linkToEdge_Vertex==NULL){
                        ptr_v->linkToEdge_Vertex=e;
                    }
                    else{
                        ptr_e=ptr_v->linkToEdge_Vertex;
                        while(ptr_e->link_Edge!=NULL){
                            if (strcmp(ptr_e->ID_Edge,ptrLogin->ID_Vertex)==0){
                                flag=1;
                                cout<<endl<<"You already follow this user ";
                                break;
                            }
                            ptr_e=ptr_e->link_Edge;

                        }
                        if (flag==0)
                            ptr_e->link_Edge=e;
                    }
                    break;
                }
                ptr_v=ptr_v->linkToVertex_Vertex;
            }
        }
        else{
            cout<<endl<<"No such userId exists";
        }
    }
    
    int login(){
        char id[20];
        char password[20];
        cout<<endl<<"Enter ID       : ";
        cin>>id;
        cout<<endl<<"Enter password : ";
        cin>>password;
        ptr_v=start;
        while(ptr_v!=NULL){
            if (strcmp(ptr_v->ID_Vertex,id)==0 && strcmp(ptr_v->password_Vertex,password)==0){
                ptrLogin=ptr_v;
                return 1;
            }
            else if (strcmp(ptr_v->ID_Vertex,id)==0 && strcmp(ptr_v->password_Vertex,password)!=0){
                return 2;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }
        return 0;
    }

    void logout(){
        ptrLogin=NULL;
        cout<<endl<<"Logged out Successfully !";
    }

    /*void insertEdge(Vertex* v1,Vertex* v2){
        Edge* e=new Edge;
        

    }*/

    void viewBioData(){
        cout<<endl<<"User ID    : "<<ptrLogin->ID_Vertex;
        cout<<endl<<"User Name  : "<<ptrLogin->userName_Vertex<<endl;
        cout<<endl<<"Bio data";
        cout<<endl<<"--------";
        cout<<endl<<"DOB         :  "<<ptrLogin->bio_Vertex.dob;
        cout<<endl<<"Institution :  "<<ptrLogin->bio_Vertex.institution;
        cout<<endl<<"Native      :  "<<ptrLogin->bio_Vertex.native;
    }

    void updateDOB(){
        cout<<endl<<"Enter DOB : ";
        cin>>ptrLogin->bio_Vertex.dob;
    }

    void updateInstitution(){
        cout<<endl<<"Enter Institution : ";
        cin>>ptrLogin->bio_Vertex.institution;
    }

    void updateNative(){
        cout<<endl<<"Enter Native : ";
        cin>>ptrLogin->bio_Vertex.native;
    }

    void display(){
        ptr_v=start;
        while(ptr_v!=NULL){
            cout<<endl<<"\nID        :  "<<ptr_v->ID_Vertex;
            cout<<endl<<"User Name :  "<<ptr_v->userName_Vertex;
            cout<<endl<<"\n         Bio Data ";
            cout<<endl<<"------------------------";
            cout<<endl<<"DOB         :  "<<ptr_v->bio_Vertex.dob;
            cout<<endl<<"Institution :  "<<ptr_v->bio_Vertex.institution;
            cout<<endl<<"Native      :  "<<ptr_v->bio_Vertex.native;
            
            ptr_e = ptr_v->linkToEdge_Vertex;
            while(ptr_e!=NULL){
                cout<<"------>"<<ptr_e->ID_Edge;
                ptr_e=ptr_e->link_Edge;
            }
            ptr_v=ptr_v->linkToVertex_Vertex;
        }
    }
};

void afterLogin(Graph& g){
    int ch2;
    int ch3;
    do{
        system("cls");
        cout<<endl<<"\nWhat do you wanna choose ? Enter 0 to logout";
        cout<<endl<<"--------------------------------------------";
        cout<<endl<<"1)  View Biodata";
        cout<<endl<<"2)  Update Biodata";
        cout<<endl<<"3)  Follow someone";
        cout<<endl<<"4)  View Followers";
        cout<<endl<<"5)  View Following";
        cout<<endl<<"6)  People you may know";
        cout<<endl<<"7)  People who don't follow you back";
        cout<<endl<<"8)  People who you don't follow back";
        cout<<endl<<"9)  Search for a user";
        cout<<endl<<"10) View stalkers";
        cout<<endl<<"0)  Logout"<<endl;
        cin>>ch2;
        
        switch(ch2){
            case 0: 
                    g.logout();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 1: 
                    g.viewBioData();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 2:
                    cout<<endl<<"What do you wanna update ? ";
                    cout<<endl<<"1) DOB";
                    cout<<endl<<"2) Institution";
                    cout<<endl<<"3) Native"<<endl;
                    cin>>ch3;
                    switch(ch3){
                        case 1: g.updateDOB();break;
                        case 2: g.updateInstitution();break;
                        case 3: g.updateNative();break;
                    }
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 3: 
                    g.followSomeOne();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 4:
                    g.viewFollowers();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 5: 
                    g.viewFollowing();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 6:
                    g.peopleYouMayKnow();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 7:
                    g.PeopleWhoDontFollowYouBack();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 8:
                    g.PeopleWhoYouDontFollowBack();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 9: 
                    g.searchUser();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;
            case 10:
                    g.viewStalkers();
                    cout<<endl<<endl<<"Enter a key to display main menu...";
                    getch();
                    break;

        }
    }while(ch2!=0);

}

fstream f;
data_Vertex dv;
followers ff;

int main(){
    Graph g;
    int ch1,ch2;
    int login_;
    
    f.open("vertex.bin",ios::binary|ios::in);
    if (f.fail()){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    while(f.read((char*)&dv,sizeof(dv))){
        g.insertVertex(dv.return_id(),dv.return_name(),dv.return_pass(),dv.return_dob(),dv.return_institution(),dv.return_native());
        //dv.display();
    }
    f.close();
    
    f.open("followers.bin",ios::binary|ios::in);
    if (f.fail()){
        cerr<<endl<<"Error opening file";
        exit(1);
    }
    while(f.read((char*)&ff,sizeof(ff))){
        g.followSomeOne(ff.gets1(),ff.gets2());
        //ff.display();
    }
    f.close();
        /*
    g.insertVertex("neha@","Neha","kitkat","09.06.2003","PSG","karur");
    g.insertVertex("kri@","Krithika","veg","04.01.2004","PSG","Chennai");
    g.insertVertex("preth@","prethika","pathy","26.03.2003","PSG","Chennai");
    g.insertVertex("bhar@","bharathi","sanjana","21.07.2003","PSG","Hosur");
    g.insertVertex("sanj@","sanjana","bhar","04.03.2004","PSG","Dindigul");
    g.insertVertex("yush@","aayush","foodie","03.01.2004","PSG","Cbe");
    g.insertVertex("ben@","benny","same","06.03.2003","PSG","cbe");
    g.insertVertex("jeevi@","jeevika","biriyani","10.08.2003","PSG","sivakasi");
    g.followSomeOne("neha@","kri@");
    g.followSomeOne("neha@","yush@");
    g.followSomeOne("neha@","sanj@");
    g.followSomeOne("neha@","jeevi@");
    g.followSomeOne("kri@","jeevi@");
    g.followSomeOne("preth@","sanj@");
    g.followSomeOne("preth@","kri@");
    g.followSomeOne("sanj@","kri@");
    g.followSomeOne("sanj@","bhar@");
    g.followSomeOne("sanj@","ben@");
    g.followSomeOne("bhar@","ben@");
    g.followSomeOne("bhar@","sanj@");
    g.followSomeOne("bhar@","preth@");
    g.followSomeOne("yush@","bhar@");
    g.followSomeOne("yush@","preth@");
    g.followSomeOne("ben@","yush@");
    g.followSomeOne("ben@","bhar@");
    g.followSomeOne("ben@","neha@");
    g.followSomeOne("jeevi@","yush@");
    g.followSomeOne("jeevi@","neha@");*/

    cout<<endl<<"WELCOME TO SOCIAL WEB";
    cout<<endl<<"====================="<<endl<<endl;

    do{
        cout<<endl<<"What do you want to choose ? Enter 0 to exit";
        cout<<endl<<"--------------------------------------------"<<endl;
        
        cout<<endl<<"1) Login to existing Account";
        cout<<endl<<"2) Create new Account"<<endl;

        //cout<<endl<<"3) Print";

        cin>>ch1;
        if (ch1==1){
            login_=g.login();
            if(login_==1){
                cout<<endl<<"Login successful !"<<endl;
                
                cout<<endl<<endl<<"Enter a key to display main menu...";
                getch();
                afterLogin(g);
                

            }
            else if (login_==2){
                cout<<endl<<"Incorrect Password ";
                cout<<endl<<endl<<"Enter a key to display main menu...";
                getch();
            }
            else{
                cout<<endl<<"User name you have entered doesnot exist !";
                cout<<endl<<endl<<"Enter a key to display main menu...";
                getch();
            }
        }
        else if(ch1==2){
            g.insertVertex();
            cout<<endl<<endl<<"Enter a key to display main menu...";
            getch();
        }
        else if (ch1==3){
            g.display();
            cout<<endl<<endl<<"Enter a key to display main menu...";
            getch();
        }   
    }while(ch1!=0);
}
