#include<iostream>

using namespace std;


bool checkDigit(char ch)
{
        if ((ch>='0' && ch<='9'))
        {
            return true;
        }
        return false;    
}

int main()
{

    char ch='\0';
    bool bRet=false;

    cout<<"Enter Input: "<<endl;
    scanf("%c",&ch);

    bRet=checkDigit(ch);

    if (bRet==true)
    {
        cout<<"Digit"<<endl;
    }
    else
    {
        cout<<" Not Digit"<<endl;
    }
    return 0;
}