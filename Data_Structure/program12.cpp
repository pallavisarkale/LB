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

    int iSize=Count();

    if ((ipos<1) && (ipos>(iSize+1)))
    {
        return;
    }
    else if (ipos==1)
    {
        InsertFirst(no);
    }
    else if (ipos==(iSize+1))
    {
        InsertLast((no));
    }
    else
    {
        
        PNODE newn=NULL;

        newn=new NODE;//memory allocation 

        newn->data=no;
        newn->next=NULL;

        PNODE temp=Head;
        int icnt=0;

        for (icnt=1;icnt<ipos-1;icnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        

    }  
}

void SinglyCLL::DeleteFirst(){

    if (Head==NULL && Tail==NULL)
    {
        return;
    }
    else if (Head==Tail)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }
    else
    {
        Head=Head->next;
        delete Tail->next;
        Tail->next=Head;

    }
    
}

void SinglyCLL::DeleteLast(){

    PNODE Temp=Head;

    if (Head==NULL && Tail==NULL)
    {
        return;
    }
    else if (Head==Tail)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
    }
    else
    {
        while (Temp->next!=Tail)
        {
            Temp=Temp->next;
        }
        delete Tail;
        Tail=Temp;
        Tail->next=Head;
        
    }
}

void SinglyCLL::DeleteAtPos(int ipos){

    int iSize=Count();

    if ((ipos<1) && (ipos>iSize))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if (ipos==1)
    {
        DeleteFirst();
    }
    else if (ipos==iSize)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1=Head;
        int icnt=0;

        for (icnt=1;icnt<ipos-1;icnt++)
        {
            temp1=temp1->next;
        }

        PNODE temp2=temp1->next;
        temp1->next=temp2->next;

        delete temp2;

    }
}

void SinglyCLL::Display(){

    PNODE Temp=Head;

    if (Head==NULL && Tail==NULL)
    {
        cout<<"Linked List is emty"<<endl;
        return;
    }
    
    do
    {
       cout<<"|"<<Temp->data<<"|->";//print upto Tail
       Temp=Temp->next;
    }
    while(Temp!=Head);
    //cout<<"|"<<Temp->data<<"|->";//print last node i.e Tail so this is not correct 
    cout<<endl;
    
}

int SinglyCLL::Count(){

    PNODE Temp=Head;
    int iCount=0;


    if (Head==NULL && Tail==NULL)
    {
        return 0;
    }
    
    do
    {
        iCount++;
        Temp=Temp->next;
    } while (Temp!=Head);
    
    return iCount;

}

int main()
{

    SinglyCLL obj;
    int iRet=0;
    
    obj.InsertFirst(51);//51
    obj.InsertFirst(21);//21 51
    obj.InsertFirst(11);//11 21 51
    obj.InsertLast(101);//11 21 51 101
    obj.InsertLast(111);//11 21 51 101 111
    obj.InsertLast(121);//11 21 51 101  111 121
    obj.InsertLast(131);//11 21 51 101 111  121     131
    obj.InsertLast(141);//11 21 51 101  111 121     131  141
    obj.InsertLast(151);//11 21 51 101 111  121     131     151


    obj.Display();

    iRet=obj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.InsertAtPos(75,4);
    obj.DeleteAtPos(6);


    obj.Display();

    iRet=obj.Count();
    cout<<"Number of Nodes of LL  are : "<<iRet<<endl;


    return 0;
}