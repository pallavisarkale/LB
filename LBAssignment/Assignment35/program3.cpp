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
        T FistOcuuerence(T);
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
T ArrayX<T>::FistOcuuerence(T iNo)
{
    int first=0;
    for(int i = 0; i < Size; i++)
    {
        if(iNo==Arr[i] )
        {
            first=i;
            break;
        }
        else
        {
            first=-1;
        }
    }
    return first;
}

int main()
{
    int size;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&size);

    ArrayX <int>obj1(size);
    
    obj1.Accept();
    obj1.Display();

    int iRet=obj1.FistOcuuerence(2);
    
    cout<<"frequency is  : "<<iRet<<endl;


    int fsize;
    cout<<"Enter How many elements in array"<<endl;
    scanf("%d",&fsize);

    ArrayX <float>obj2(fsize);
    
    obj2.Accept();
    obj2.Display();

    float fRet=obj2.FistOcuuerence(2.2);
    
    cout<<"frequency is  : "<<fRet<<endl;

    

    return 0;
}
