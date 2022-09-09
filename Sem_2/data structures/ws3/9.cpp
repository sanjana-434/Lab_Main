//Code written be SANJANA .R on 23/03/2022
//addition of sparse matrix 
#include <iostream>
#include <cstdlib>
using namespace std;

void triplet_form(int* t[],int* sm[],int nz);
int input_sm(int* sm[]);
int r,c;     //r=rows   c=colns
int main()
{
    int i,j;
    int nz1,nz2;  //non zero elts
    cout<<endl<<"Enter rows of sparse matrix : ";
    cin>>r;
    cout<<endl<<"Enter columns of sparse matrix : ";
    cin>>c;
    int** sm1=new int*[r];    //sparse matrix1
    for (i=0;i<r;i++){
        sm1[i]=new int[c];
    }
    int** sm2=new int*[r];    //sparse matrix2
    for (i=0;i<r;i++){
        sm2[i]=new int[c];
    }
    //inputting sparse matrix
    cout<<endl<<"Enter sparse matrix 1 : ";
    nz1=input_sm(sm1);
    cout<<endl<<"Enter sparse matrix 2 : ";
    nz2=input_sm(sm2);
    //triplet matrices
    int** t1=new int*[nz1+1];
    int** t2=new int*[nz2+1];
    for (i=0;i<nz1+1;i++){
        t1[i]=new int[3];
        t2[i]=new int[3];
    }
    triplet_form(t1,sm1,nz1);
    triplet_form(t2,sm2,nz2);
    //addition of two sm in triplet form

    

}
int input_sm(int* sm[]){
    //function to input sparse matrix
    //function returns number of non  zero elts
    int i,j,nz=0;
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            cin>>sm[i][j];
            if (sm[i][j]!=0){
                nz++;
            }
        }
    }
    return nz;
}
void triplet_form(int* t[],int* sm[],int nz){
    //function to convert sparse matrix to triplet form
    t[0][0]=r,t[0][1]=c,t[0][2]=nz;
    int i,j,k=1;
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            if (sm[i][j]!=0){
                t[k][0]=i;
                t[k][1]=j;
                t[k][2]=sm[i][j];
                k++;
            }
        }
    }
}
void addition(int* t1[],int* t2[],int nz1,int nz2){
    //function to add two sm 
    int rows=0;   //rows of resultant matrix
    int** add;
    int len = sizeof(int *) *(rows+1) + sizeof(int) * 3 *(1+rows);
    add = (int **)malloc(len);
    add[0][0]=r,add[0][1]=c,add[0][2]=0;
    int p=1,q=1;   //pointers to t1 and t2 respectively
    while (p<=nz1 && q<=nz2){
        if (t1[p][0]==t2[p][0]){
            if (t1[p][1]==t2[p][1]){
                rows++;
                len = sizeof(int *) *(1+rows) + sizeof(int) * 3 *(1+rows);
                add = (int **)realloc(add,len);
                add[rows][0]=t1[p][0],add[rows][1]=t1[p][1];
                add[rows][2]=t1[p][2]+t2[p][2];
                p++,q++;
            }
            else if (t1[p][1]>t2[p][1]){
                rows++;
                len = sizeof(int *) *(1+rows) + sizeof(int) * 3 *(1+rows);
                add = (int **)realloc(add,len);
                add[rows][0]=t2[p][0],add[rows][1]=t2[p][1];
                add[rows][2]=t2[p][2];
                q++;
            }
            else{
                rows++;
                len = sizeof(int *) *(1+rows) + sizeof(int) * 3 *(1+rows);
                add = (int **)realloc(add,len);
                add[rows][0]=t1[p][0],add[rows][1]=t1[p][1];
                add[rows][2]=t1[p][2];
                p++;
            }
        }
        else if (t1[p][0]>t2[p][0]){
            rows++;
            len = sizeof(int *) *(1+rows) + sizeof(int) * 3 *(1+rows);
            add = (int **)realloc(add,len);
            add[rows][0]=t2[p][0],add[rows][1]=t2[p][1];
            add[rows][2]=t2[p][2];
            q++;
        }
        else{
            rows++;
            len = sizeof(int *) *(1+rows) + sizeof(int) * 3 *(1+rows);
            add = (int **)realloc(add,len);
            add[rows][0]=t1[p][0],add[rows][1]=t1[p][1];
            add[rows][2]=t1[p][2];
            p++;
        }
    }
    //printing the addition of two matrices
    for (int i=0;i<rows+1;i++){
        for (int j=0;j<3;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<"\n";
    }

}
