#include<iostream>

using namespace std;


bool checkAlpha(char ch)
{
        if ((ch>='A' && ch<='Z'))
        {
            for (char c=ch+1;c<='Z';c++)
            {
                printf("%c\n",c);
            }
            
        }
        else if ((ch>='a' && ch<='z'))
        {
           for (char c=ch+1;c<='z';c++)
            {
                printf("%c\n",c);
            }

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