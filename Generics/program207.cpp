//Accept two Number from user and swap that numbers in Generics


#include<iostream>
using namespace std;

template <class T>//template header to change int to T
void SwapR(T &p,T &q)//call by reference 
{
    T temp;
    temp=p;
    p=q;
    q=temp;
}
int main()
{
    int iNo1=11 ,iNo2=21;
    cout<<"before Swap : "<<iNo1<<" "<<iNo2<<endl;

    SwapR(iNo1,iNo2);
    cout<<"After Swap: "<<iNo1<<" " <<iNo2<<endl;


    return 0;
}