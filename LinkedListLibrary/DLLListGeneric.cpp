#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;

};
//typedef is not allowed with template
template<class T>
class SinglyLinkedList
{
    public:
        struct node<T> *Head;//<T> is mandatory
        int Count;

        SinglyLinkedList();
        void InsertFirst(T);
        void InsertLast(T);
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T,int);
        void DeleteAtPos(int);

        void Display();
        int CountNode();


};

template<class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
    Head=NULL;
    Count=0;
}
template<class T>
void SinglyLinkedList<T>::InsertFirst(T No)
{
    struct node<T> *newn=NULL;//create new node
    newn=new node<T>;//memory allocation depend on data type

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;


    if (Head==NULL)
    {
        Head=newn;
    }
    else
    {
        newn->next=Head;
        Head->prev=newn;
        Head=newn;
    }
    Count++;
}
template<class T>
void SinglyLinkedList<T>::InsertLast(T No)
{
    struct node<T> *newn=NULL;//create new node
    struct node<T> *temp=NULL;

    newn=new node<T>;//memory allocation depend on data type

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;


    if (Head==NULL)
    {
        Head=newn;
    }
    else
    {
        struct node<T> *temp=Head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;    

    }
    Count++;
}


template<class T>
void SinglyLinkedList<T>::DeleteFirst()
{
    if (Head==NULL)
    {
        return;
    }
    if (Head->next==NULL)
    {
        free(Head);
        Head=NULL;
    }
    else
    {
        struct node<T> *temp=Head;
        Head=Head->next;
        free(Head->prev);
        Head->prev=NULL;

        Count--;
    }
    
    
}

template<class T>
void SinglyLinkedList<T>::DeleteLast()
{
    if (Head==NULL)
    {
        return;
    }
    if((Head) ->next == NULL)        // Single node
    {
        free(Head);
        Head = NULL;
    }
    else
    {
        struct node<T> *temp=Head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        Count--;
        temp->next=NULL;
    }
    
    
}



template<class T>
void SinglyLinkedList<T>::Display()
{
    cout<<"Elements from Linked List are: "<<endl;

    struct node<T> *temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

template<class T>
int SinglyLinkedList<T>::CountNode()
{
    return Count;


}

template<class T>
void SinglyLinkedList<T>::InsertAtPos(T No,int Pos)
{
    int Size=Count;

    if (Pos<1 && Pos>(Size+1))
    {
       cout<<"Invalide"<<endl;
       return;
    }
    
    if (Pos==1)
    {
        InsertFirst(No);
    }
    else if (Pos==(Size+1))
    {
        InsertLast(No);
    }
    else
    {
       struct node<T> *newn=NULL;//create new node
        newn=new node<T>;//memory allocation depend on data type
        struct node<T> *Temp=Head;

        newn->data=No;
        newn->next=NULL;
        newn -> prev = NULL;        // *


        for (int iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            Temp=Temp->next;
        }
        newn->next=Temp->next;
        Temp->next->prev = newn;        // *
        Temp->next = newn;
        Temp->prev = Temp;
        Count++;
        
    }
}


template<class T>
void SinglyLinkedList<T>::DeleteAtPos(int Pos)
{
    int Size=Count;

    if (Pos<1 && Pos>(Size+1))
    {
       cout<<"Invalide"<<endl;
       return;
    }
    
    if (Pos==1)
    {
        DeleteFirst();
    }
    else if (Pos==Size)
    {
       DeleteLast();
    }
    else
    {
        struct node<T> *temp=Head;

        for (int iCnt=1;iCnt<(Pos-1);iCnt++)
        {
            temp=temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
        Count--;

       
    }
}
int main()
{
    SinglyLinkedList<int> obj1;

    obj1.InsertFirst(121);
    obj1.InsertFirst(131);
    obj1.InsertFirst(141);
    obj1.InsertFirst(111);
    obj1.InsertAtPos(333,3);//data,pos
    obj1.Display();
    int iRet=obj1.CountNode();
    cout<<"Count of node is: "<<iRet<<endl;

    cout<<"After delete First "<<endl;
    obj1.DeleteFirst();
    obj1.Display();
    cout<<"After delete Last "<<endl;
    obj1.DeleteLast();
    obj1.Display();
    int iRet2=obj1.CountNode();
    cout<<"Count of node is: "<<iRet2<<endl;

    cout<<"Elements after DeletAtPos of node is: "<<endl;
    obj1.DeleteAtPos(2);
    obj1.Display();
    int iRet3=obj1.CountNode();
    cout<<"Count of node is: "<<iRet3<<endl;




    SinglyLinkedList<float> obj2;
    obj2.InsertFirst(12.1);
    obj2.InsertFirst(1.31);
    obj2.InsertFirst(14.1);
    obj2.InsertFirst(11.1);
    obj2.InsertAtPos(33.3,3);
    obj2.Display();
    int fRet=obj2.CountNode();
    cout<<"Count of node is: "<<fRet<<endl;

    cout<<"After delete  First"<<endl;
    obj2.DeleteFirst();
    obj2.Display();
    cout<<"After delete Last "<<endl;
    obj2.DeleteLast();
    obj2.Display();
    int fRet2=obj2.CountNode();
    cout<<"Count of node is: "<<fRet2<<endl;

    cout<<"Elements after DeletAtPos of node is: "<<endl;
    obj2.DeleteAtPos(2);
    obj2.Display();
    int fRet3=obj2.CountNode();
    cout<<"Count of node is: "<<fRet3<<endl;


    SinglyLinkedList<char> obj3;

    obj3.InsertFirst('A');
    obj3.InsertFirst('B');
    obj3.InsertFirst('C');
    obj3.InsertFirst('D');
    obj3.InsertAtPos('E',3);

    obj3.Display();
    int cRet=obj3.CountNode();
    cout<<"Count of node is: "<<cRet<<endl;

    cout<<"After delete First"<<endl;
    obj3.DeleteFirst();
    obj3.Display();
    cout<<"After delete Last "<<endl;
    obj3.DeleteLast();
    obj3.Display();
    int cRet2=obj3.CountNode();
    cout<<"Count of node is: "<<cRet2<<endl;


    cout<<"Elements after DeletAtPos of node is: "<<endl;
    obj3.DeleteAtPos(2);
    obj3.Display();
    int cRet3=obj3.CountNode();
    cout<<"Count of node is: "<<cRet3<<endl;

    return 0;
}