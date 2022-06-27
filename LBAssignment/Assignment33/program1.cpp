
#include<iostream>
using namespace std;

template <class T>//template header to change int to T
int  MultiplyX(T &p,T &q)//call by reference 
{
    return p*q;
}
int main()
{
    int iNo=0,iNo2;
    

    cout<<"enter  First number : "<<endl;
    scanf("%d",&iNo);
    cout<<"Enter second Number  "<<endl;
    scanf("%d",&iNo2);

    int iRet=MultiplyX(iNo,iNo2);
    cout<<"multiplication is:"<<iRet<<endl;

    float fNo;
    float fNo2;

    cout<<"enter first number : "<<endl;
    scanf("%f",&fNo);
    cout<<"Enter second Number"<<endl;
    scanf("%f",&fNo2);
    float fRet=MultiplyX(fNo,fNo2);
    cout<<"multiplication is: %f"<<fRet<<endl;


    return 0;
}