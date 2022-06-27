
#include<iostream>
using namespace std;

template <class T>//template header to change int to T
void Display(T &p,int q)//call by reference 
{
    for (int  i = 0; i <q; i++)
    {
       cout<<p<<" "<<endl;
    }
    
}
int main()
{
    int iNo=0,iNo2;

    cout<<"enter number to display : "<<endl;
    scanf("%d",&iNo);
    cout<<"How many times wants to display : "<<endl;
    scanf("%d",&iNo2);

    Display(iNo,iNo2);

    float fNo=0;
    int fNo2;

    cout<<"enter number to display \n: "<<endl;
    scanf("%f",&fNo);
    cout<<"How many times wants to display : "<<endl;
    scanf("%d",&fNo2);

    Display(fNo,fNo2);

    
    char ch='\0';
    int cNo;

    cout<<"Enter Input: "<<endl;
    scanf("%c",&ch);

    cout<<"How many times wants to display : "<<endl;
    scanf("%d",&cNo);

    Display(ch,cNo);

    return 0;
}