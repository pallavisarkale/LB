#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='a' && ch<='z'))
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
        cout<<"Small Case"<<endl;
    }
    else
    {
        cout<<" Not Small case "<<endl;
    }
    return 0;
}