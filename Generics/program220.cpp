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
        T Maximum();
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

template <class T>//Generic
T ArrayX<T>::Maximum()//<T> require after class 
{
    T Max= Arr[0];
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
    ArrayX <int>obj1(5);//pass size of array in constructore
    obj1.Accept();
    obj1.Display();
    int iRet=obj1.Maximum();
    cout<<"Maximum is : "<<iRet<<endl;

    ArrayX <float>obj2(5);//pass size of array in constructore
    obj2.Accept();
    obj2.Display();
    float fRet=obj2.Maximum();
    cout<<"Maximum is : "<<fRet<<endl;
    

    return 0;
}