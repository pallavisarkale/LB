#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='!' && ch<='*'))
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
        cout<<"Special Character"<<endl;
    }
    else
    {
        cout<<" Not Special Character "<<endl;
    }
    return 0;
}