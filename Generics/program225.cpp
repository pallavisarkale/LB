//Stack
/* output
    Elements from Stack are :
    D C B A
    Number of Node: 4
    Removed element is :D
    Removed element is :C
    Elements from Stack are :
    B A
    Number of Node: 2

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
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);        // InsertFirst
        void Pop();            // DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>//InsertFirst
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next=Head;//handled empty also having more than one node
    Head=newn;

    Count++;
}

template<class T>
void Stack<T>::Pop()//DeleteFirst
{
    T no;//any type like int ,double char

    if (Count==0)//Linked list empty Head==NULL
    {
        cout<<"Stack is empty"<<endl;
        return;
    }
    no=Head->data;
    struct node<T> *temp=Head;
    Head=Head->next;
    delete temp;
 
    Count--;
    cout<<"Removed element is :"<<no<<endl; 
}


template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Stack are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    Stack<char> sObj1;//int ,char ,float

    sObj1.Push('A');
    sObj1.Push('B');
    sObj1.Push('C');
    sObj1.Push('D');//D C B A

    sObj1.Display();
    cout<<"Number of Node: "<<sObj1.CountNode()<<endl;

    sObj1.Pop();//delete D
    sObj1.Pop();//delete c


    sObj1.Display();
    cout<<"Number of Node: "<<sObj1.CountNode()<<endl;

    sObj1.Push('P');
    sObj1.Display();
    cout<<"Number of Node: "<<sObj1.CountNode()<<endl;


    
    return 0;
}