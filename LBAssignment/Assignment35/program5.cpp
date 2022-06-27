#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int value);
        ~ArrayX();
        void Accept();
        void Display();
        void ReverseContent();
};

template<class T>
ArrayX<T>::ArrayX(int value)
{
    Size = value;//how many numbers in array
    Arr = new T[Size];//memory allocation using T
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete [] Arr;//deallocation memory
}

template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the values : "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    cout<<"Values are: "<<endl;
    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
void ArrayX<T>::ReverseContent()
{
    for(int i = Size; i>=0; i--)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    int size;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&size);

    ArrayX <int>obj1(size);
    
    obj1.Accept();
    obj1.Display();

    obj1.ReverseContent();
    


    int fsize;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&fsize);

    ArrayX <float>obj2(fsize);
    
    obj2.Accept();
    obj2.Display();

    obj2.ReverseContent();
    

    

    return 0;
}
