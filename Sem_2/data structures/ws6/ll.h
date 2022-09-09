#include <iostream>

class node{
    public:
        int data;
        node* link;
};
class ll{
    node* start;
    node* ptr;
    public:
        ll();
        void createNode(int);
        int isempty();
        void insertEnd(int);
        void insertBeg(int);
        void insertMid(int,int);
        void display();
        int sum();
        int count();
        void deleteBeg();
        void deleteMid(int);
        void deleteEnd();

        void equalOrNot(ll&);
        int findMiddle();
};