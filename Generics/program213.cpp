//Accept two int,float ,char data from user and addition of that values that  in Generics


#include<iostream>
using namespace std;

template<class T>

T Max(T Arr[],int size)
{
    int i=0;

    T max1=Arr[0];

    for ( i = 0; i < size; i++)
    {
        if (max1<Arr[i])
        {
            max1=Arr[i];
        }
    }
     return max1;  
}

int main()
{
    int Brr[]={10,20,21,30,45};
    int iRet=Max(Brr,5);
    cout<<"Max int is :"<<iRet<<endl;


    

    float Crr[]={10.11,11.34,32.54,55.04,46.34};
    float bRet=Max(Crr,5);
    cout<<"Maximum is : "<<bRet<<endl;


    return 0;
}