
#include<iostream>
using namespace std;

template <class T>//template header to change int to T
int  FindMaxFromThreeNum(T &p,T &q,T &r)//call by reference 
{
    T max;
    if (p>=q && q>=r)
    {
        max=p;
    }
    else if (q>=p && q>=r)
    {
        max=q;
    }
    else if (r>=p && r>=q)
    {
        max=r;
    }
    
    return max;
}
int main()
{
    int iNo1,iNo2,iNo3;
    cout<<"enter 3 numbers: \n"<<endl;
    scanf("%d\t%d\t%d",&iNo1,&iNo2,&iNo3);

    int iRet=FindMaxFromThreeNum(iNo1,iNo2,iNo3);
    cout<<"Max number is: \n"<<iRet<<endl;


    float fNo1,fNo2,fNo3;
    cout<<"enter 3 numbers: \n"<<endl;
    scanf("%f\t%f\t%f",&fNo1,&fNo2,&fNo3);

    float fRet=FindMaxFromThreeNum(fNo1,fNo2,fNo3);
    cout<<"Max number is: \n"<<fRet<<endl;

    
    return 0;
}