#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

class Graph;
class Vertex;
class Edge{
public:
    string instaID;

    Edge(){
        instaID="";
    }
};
class Vertex{
public:
    string instaID;
    string userName;
    list <Edge> egdeList;

    Vertex(){
        instaID="";
        userName="";
    }
    Vertex(string id,string urNm){
        instaID=id;
        userName=urNm;
    }
    void setInstaID(string id){
        instaID=id;
    }
    void setUserName(string urNm){
        userName=urNm;
    }
    string getInstaID(){
        return instaID;
    }
    string getUserName(){
        return userName;
    }

};
class Graph{
public:
    vector <Vertex> vertices;
    bool addNode(Vertex newVertex){
        if (checkIfVertexExistByID(newVertex.instaID)){
            cout<<endl<<"Insta ID exists already ! Try giving some other ID";
        }
        else{
            vertices.push_back(newVertex);
            cout<<endl<<"Account created successfully !";
        }
    }
    bool checkIfVertexExistByID(string id){
        bool flag=0;
        for (int i=0;i<vertices.size();i++){
            if (vertices.at(i).getInstaID()==id){
                flag=1;
                break;
            }
        }
        return flag;
    }
    void updateUserName(string id,string urNm){
        if (checkIfVertexExistByID(id)){
            for (int i=0;i<vertices.size();i++){
                if (vertices.at(i).getInstaID()==id){
                    vertices.at(i).userName=urNm;
                    cout<<endl<<"Updated successfully !";
                    break;
                }
            }
        }
        else{
            cout<<endl<<"User ID doesn't exit !";
        }
    }
};

int main(){
    Graph g;
    Vertex v;
    int ch1;
    string urNm;        //user name
    string id;          // insta id 
    do{
        cout<<endl<<"What do you want to choose?";
        cout<<endl<<"Select an option. Enter 0 to exit.";
        cout<<endl<<"1) Create new user ";
        cout<<endl<<"2) Update ";
        cout<<endl<<"3) Print";
        cout<<endl<<"0) Exit program";

        cout<<endl;
        cin>>ch1;
        switch(ch1){
            case 1: 
                    cout<<endl<<"Enter Insta ID  : ";
                    cin>>id;
                    cout<<endl<<"Enter user name : ";
                    cin>>urNm;
                    v.setInstaID(id);
                    v.setUserName(urNm);
                    g.addNode(v);
                    break;
            case 2: 
                    cout<<endl<<"Enter the insta ID to be updated : ";
                    cin>>id;
                    int ch2;
                    cout<<endl<<"What is to be updated ? ";
                    cout<<endl<<"1) Username";
                    cout<<endl;
                    cin>>ch2;
                    switch (ch2){
                        case 1:
                                cout<<endl<<"Enter user name : ";
                                cin>>urNm;
                                g.updateUserName(id,urNm);
                                break;
                        
                        default:
                                break;
                    }
                    break;

        }
    }while(ch1!=0);
    cout<<"***  "<<g.vertices.at(0).getInstaID()<<"   "<<g.vertices.at(0).getUserName();
    cout<<"***  "<<g.vertices.at(1).getInstaID()<<"   "<<g.vertices.at(1).getUserName();
    cout<<"***  "<<g.vertices.at(2).getInstaID()<<"   "<<g.vertices.at(2).getUserName();
    cout<<"***  "<<g.vertices.at(3).getInstaID()<<"   "<<g.vertices.at(3).getUserName();
}