//Accept one character from user and conver case of that character

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

bool caseConverter(char ch)
{
    if(isupper(ch))
    {
        return true;
    } 
    else if(islower(ch))
    {
        return false;
    } 
}
int main()
{
    char cValue,ch;
    bool bRet=false;

    printf("Enter character: ");
    scanf("%c",&cValue);

    bRet=caseConverter(cValue);

    if (bRet==true)
    {
        ch=isupper(cValue);
        printf("%c",ch);
    }
    else {
            ch=islower(cValue);
            printf("%c",ch);
    }
    
    return 0;
}