#include <iostream>
using namespace std;

class lists{
    int* l;   //l=list
    int len;
public:
    lists();
    lists(int n);
    void getdata();
    void display();
    int size_list();
    friend void union_lists(const lists&,const lists& );
    friend void intersection_lists(const lists& l1,const lists& l2);
    friend bool equal_lists(const lists& l1,const lists& l2);
    friend void merge_list(const lists& l1,const lists& l2);
    void sort(lists a);
};
lists::lists(){
    l=NULL;
}
lists::lists(int n){
    len=n;
    l=new int[n];
}
void lists::getdata(){
    cout<<endl<<"Enter the list : ";
    //nt len=sizeof(l);
    //cout<<len;
    for (int i=0;i<len;i++){
        cin>>l[i];
    }
}
void lists::display(){
    int len =len;
    cout<<endl<<"Displaying the list : ";
    cout<<"[";
    for (int i=0;i<len;i++){
        cout<<l[i];
        if (i!=(sizeof(l)/4)-1){
            cout<<",";
        }
    }
    cout<<" ]";
}
void union_lists(const lists& l1,const lists& l2){
    int len_l1=l1.len;
    int len_l2=l2.len;
    int* l3=new int[len_l1+len_l2];
    int i,j,k;
    int f;
    for (i=0;i<len_l1;i++){
        l3[i]=l1.l[i];
    }
    for (j=0;j<len_l2;j++){
        f=0;
        for (k=0;k<len_l1;k++){
            if (l1.l[k]==l2.l[j]){
                f=1;
                break;
            }
        }
        if (f==0){
            l3[i]=l2.l[j];
            i++;
        }
    }
    cout<<"Union of the lists : ";
    cout<<"[";
    for (j=0;j<i;j++){
        cout<<l3[j];
        if (j!=(i-1)){
            cout<<",";
        }
    }
    cout<<" ]";
}
void intersection_lists(const lists& l1,const lists& l2){
    int len_l1=l1.len;
    int len_l2=l2.len;
    int* l3=new int[len_l1];
    int i,j,k;
    k=0;        //len of l3
    for (i=0;i<len_l1;i++){
        for (j=0;j<len_l2;j++){
            if (l1.l[i]==l2.l[j]){
                l3[k]=l1.l[i];
                k++;
            }
        }
    }
    cout<<"Union of the lists : ";
    cout<<"[";
    for (i=0;i<k;i++){
        cout<<l3[i];
        if (i!=(k-1)){
            cout<<",";
        }
    }
    cout<<" ]";
}
int lists::size_list(){
    return sizeof(l);
}
bool equal_lists(const lists& l1,const lists& l2){
    int i;
    int len_l1=l1.len;
    int len_l2=l2.len;
    if (len_l1!=len_l2){
        return false;
    }
    else{
        for (i=0;i<len_l1;i++){
            if(l1.l[i]!=l2.l[i]){
                return false;
            }
        }
        return true;
    }
}
void merge_list(const lists& l1,const lists& l2){
    int len_l1=l1.len;
    int len_l2=l2.len;
    int* l3=new int[len_l1+len_l2];
    int i,j;
    for (i=0;i<len_l1;i++){
        l3[i]=l1.l[i];
    }
    for (j=0;j<len_l2;j++,i++){
        l3[i]=l2.l[j];
    }
    cout<<endl<<"Merged list : [";
    for (j=0;j<i;j++){
        cout<<l3[j];
        if(j!=(i-1)){
            cout<<",";
        }
    }
    cout<<"]";
}
void lists::sort(lists a){
    int i;
    for (i=0;i<a.len-1;i++){
        if (a.l[i]>a.l[i+1]){
            int temp=a.l[i];
            a.l[i]=a.l[i+1];
            a.l[i+1]=temp;
            i=-1;
        }
    }
    cout<<endl<<"Sorted list : [";
    for (i=0;i<a.len;i++){
        cout<<a.l[i];
        if(i!=(a.len-1)){
            cout<<",";
        }
    }
    cout<<"]";
}
int main(){
    lists l1(6);
    lists l2(6);
    cout<<endl<<"Enter the values of list 1 : ";
    l1.getdata();
    cout<<endl<<"Enter the values of list 2 : ";
    l2.getdata();
    int ch;
    do{
        cout<<endl<<"MENU";
        cout<<endl<<"====";
        cout<<endl<<"1) Union ";
        cout<<endl<<"2) Intersection ";
        cout<<endl<<"3) Set difference ";
        cout<<endl<<"4) Merging ";
        cout<<endl<<"5) Sort l1";
        cout<<endl<<"6) Sort l2";
        cout<<endl<<"7) Size of list ";
        cout<<endl<<"8) Equal or not ";
        cout<<endl<<"9) EXIT";
        cout<<endl<<endl<<"Enter your choice : ";
        cin>>ch;
        switch(ch){
            case 1:union_lists(l1,l2);
                   break;
            case 2:intersection_lists(l1,l2);
                    break;
            case 5:l1.sort(l1);break;
            case 6:l1.sort(l2);break;
            case 7:cout<<endl<<"Size of list 1 : " <<l1.size_list();
                    cout<<endl<<"Size of list 2 : " <<l2.size_list();
                    break;
            case 8:cout<<"Equal : "<<equal_lists(l1,l2);
                    break;
            case 4:merge_list(l1,l2);
        }
    }while(ch!=9);
}