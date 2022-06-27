#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int value);
        ~ArrayX();
        void Accept();
        void Display();
        int Maximum();
};

ArrayX::ArrayX(int value)
{
    Size = value;//how many numbers in array
    Arr = new int[Size];//memory allocation
}

ArrayX::~ArrayX()
{
    delete [] Arr;//deallocation memory
}

void ArrayX::Accept()
{
    cout<<"Enter the values : "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    cout<<"Values are: "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int ArrayX::Maximum()
{
    int Max= Arr[0];
    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    ArrayX obj1(5);//pass size of array in constructore
    
    obj1.Accept();
    obj1.Display();
    int iRet=obj1.Maximum();
    
    cout<<"Maximum is : "<<iRet<<endl;

    

    return 0;
}