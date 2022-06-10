#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='a' && ch<='z')&&(ch>='A' && ch<='Z'))
        {
            return true;
        }
        return false;    
}

int main()
{

    char ch='\0';
    bool bRet;

    cout<<"Enter Character: "<<endl;
    scanf("%c",&ch);

    bRet=checkAlpha(ch);

    if (bRet==true)
    {
        cout<<"Alphabet"<<endl;
    }
    else
    {
        cout<<"Not Alphabet"<<endl;
    }
    return 0;
}