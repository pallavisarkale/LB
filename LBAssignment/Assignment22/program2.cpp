#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='A' && ch<='Z'))
        {
            return true;
        }
        return false;    
}

int main()
{

    char ch='\0';
    bool bRet=false;

    cout<<"Enter String: "<<endl;
    scanf("%c",&ch);

    bRet=checkAlpha(ch);

    if (bRet==true)
    {
        cout<<"Capital"<<endl;
    }
    else
    {
        cout<<" Not Capital"<<endl;
    }
    return 0;
}