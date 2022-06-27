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
        T SmallestNum(T);
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
T ArrayX<T>::SmallestNum(T Size)
{
    T smallNum=Arr[0];
    for(int i = 0; i < Size; i++)
    {
      if (smallNum>Arr[i])
      {
        smallNum=Arr[i];
      }
      
    }
    return smallNum;
}

int main()
{
    int size;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&size);

    ArrayX <int>obj1(size);
    
    obj1.Accept();
    obj1.Display();

    int iRet=obj1.SmallestNum(size);
    
    cout<<"Largest num  is  : "<<iRet<<endl;


    
    int size2;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&size2);

    ArrayX <float>obj2(size2);
    
    obj2.Accept();
    obj2.Display();

    float fRet=obj2.SmallestNum(size2);
    
    cout<<"Largest num  is  : "<<fRet<<endl;

    return 0;
}
