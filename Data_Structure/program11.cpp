#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


class SinglyCLL
{
    private:                                    //Characteristics 
        PNODE Head;                              //8 byte 
        PNODE Tail;                               //8 byte

    public:                                    //Behaviours
        SinglyCLL();                            //default constructore

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);
        void Display();
        int Count();
};

SinglyCLL::SinglyCLL()                                                                  //default constructore
{
    Head=NULL;
    Tail=NULL;
}

void SinglyCLL::InsertFirst(int no){

    PNODE newn=NULL;        //create new node and initialize with NULL

    newn=new NODE;          //memory allocation 

    newn->data=no;          //Initialization
    newn->next=NULL;

    if ((Head==NULL) && (Tail==NULL))   //LL is empty
    {
        Head=newn;
        Tail=newn;
    }
    else                              //atleast one node
    {
        newn->next=Head;              
        Head=newn;

    }
    Tail->next=Head;//every time Tails->next=Head

}

void SinglyCLL::InsertLast(int no){

    PNODE newn=NULL;

    newn=new NODE;//memory allocation 

    newn->data=no;
    newn->next=NULL;

    if ((Head==NULL) && (Tail==NULL))//LL is empty
    {
        Head=newn;
        Tail=newn;
    }
    else                              //atleast one node
    {
        Tail->next=newn;
        Tail=newn;
    }
    Tail->next=Head;//every time Tails->next=Head

}

void SinglyCLL::InsertAtPos(int no,int ipos){

}

void SinglyCLL::DeleteFirst(){

}

void SinglyCLL::DeleteLast(){

}

void SinglyCLL::DeleteAtPos(int ipos){

}

void SinglyCLL::Display(){

    PNODE Temp=Head;

    while (Temp!=Tail)
    {
       cout<<"|"<<Temp->data<<"|->";//print upto Tail
       Temp=Temp->next;
    }
    cout<<"|"<<Temp->data<<"|->";//print last node i.e Tail so this is not correct 
    cout<<endl;
    
}

int SinglyCLL::Count(){
    return 0;
}

int main()
{

    SinglyCLL obj;
    
    obj.InsertFirst(51);//51
    obj.InsertFirst(21);//21 51
    obj.InsertFirst(11);//11 21 51
    obj.InsertLast(101);//11 21 51 101
    obj.InsertLast(111);//11 21 51 101 111

    obj.Display();

    return 0;
}