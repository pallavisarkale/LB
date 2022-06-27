#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='A' && ch<='Z'))
        {
           ch=ch+32;
           printf("%c",ch);

        }
        else if ((ch>='a' && ch<='z'))
        {
           ch=ch-32;
           printf("%c",ch);

        }
        else
        {
            printf("Invalid");
        }

}

int main()
{

    char ch='\0';
    bool bRet=false;

    cout<<"Enter String: "<<endl;
    scanf("%c",&ch);

    checkAlpha(ch);

    
    return 0;
}