//Accept two int,float ,char data from user and addition of that values that  in Generics
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

template<class T>
int Addition(T A,T B)
{
    T Ans;
    Ans=A+B;
    return Ans;
}

int main()
{
    int iNo1=11,iNo2=32;

    int iRet=Addition(iNo1,iNo2);
    cout<<"Addition is :"<<iRet<<endl;


    float fNo1=11.69,fNo2=12.78;

    float fRet=0.0;
    fRet=Addition(fNo1,fNo2);
    cout<<"Addition is :"<<fRet<<endl;

    return 0;
}