//Accept two int,float ,char data from user and addition of that values that  in Generics


#include<iostream>
using namespace std;

template<class T>

void Display(T Arr[],int size)
{
    int i;//it should be int 
    for( i = 0; i < size; i++)
    {
        cout<<Arr[i]<<endl;
    }
    
}

int main()
{
    int Brr[]={10,20,21,30,45};

    Display(Brr,5);


    float fBrr[]={10.12,20.11,21.3,30.11,45.43};

    Display(fBrr,5);

    return 0;
}