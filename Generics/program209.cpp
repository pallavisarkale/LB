//Accept two int,float ,char data from user and swap that  in Generics
/*
before Swap : 11 21
After Swap: 21 11
before Swap : 11.6 21.4
After Swap: 21.4 11.6
before Swap : A B
After Swap: B A
*/

#include<iostream>
using namespace std;

template <class T>//template header to change int to T
void SwapR(T *p,T *q)//call by address 
{
    T temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int iNo1=11 ,iNo2=21;
    cout<<"before Swap : "<<iNo1<<" "<<iNo2<<endl;

    SwapR(&iNo1,&iNo2);
    cout<<"After Swap: "<<iNo1<<" " <<iNo2<<endl;



    float fNo1=11.6 ,fNo2=21.4;
    cout<<"before Swap : "<<fNo1<<" "<<fNo2<<endl;

    SwapR(&fNo1,&fNo2);
    cout<<"After Swap: "<<fNo1<<" " <<fNo2<<endl;


    char cNo1='A' ,cNo2='B';
    cout<<"before Swap : "<<cNo1<<" "<<cNo2<<endl;

    SwapR(&cNo1,&cNo2);
    cout<<"After Swap: "<<cNo1<<" " <<cNo2<<endl;

    return 0;
}