//Queue
/* output
    Elements from Queue are :
    11 21 51 101
    Number of Elements From Queue4
    Removed element is :11
    Removed element is :21
    Removed element is :51
    Elements from Queue are :
    101
    Number of Elements From Queue1
    Removed element is :101
    Queue is empty

*/

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Queue
{
    public:
        struct node<T> *Head;
        int Count;

        Queue();
        void Enqueue(T);        // InsertLast
        void Dequeue();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct node<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}

template<class T>
void Queue<T>::Dequeue()//DeleteFirst
{
    T no;//any type like int ,double char

    if (Count==0)//Linked list empty Head==NULL
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    /*
        if (Count==1)//have only one node
        {
            no=Head->data; //holds data of node
            delete Head;
            Head=NULL;
        }
    
    */
   //below code in else if remove above comment for if
    no=Head->data;
    struct node<T> *temp=Head;
    Head=Head->next;
    delete temp;
 
    Count--;
    cout<<"Removed element is :"<<no<<endl; 
}


template<class T>
void Queue<T>::Display()
{
    cout<<"Elements from Queue are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
    Queue<int> qobj1;


    qobj1.Enqueue(11);
    qobj1.Enqueue(21);
    qobj1.Enqueue(51);
    qobj1.Enqueue(101);//Enque means InsertLAst


    qobj1.Display();
    cout<<"Number of Elements From Queue"<<qobj1.CountNode()<<endl;

    qobj1.Dequeue();
    qobj1.Dequeue();
    qobj1.Dequeue();

    qobj1.Display();
    cout<<"Number of Elements From Queue"<<qobj1.CountNode()<<endl;

    qobj1.Dequeue();
    qobj1.Dequeue();

    return 0;
}