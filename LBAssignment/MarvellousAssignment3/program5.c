//Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not

#include<stdio.h>
#include<stdbool.h>


bool checkVowels(char ch)
{
   if (
       (ch=='a') || (ch=='A') ||
       (ch=='e') || (ch=='E') ||
       (ch=='i') || (ch=='I') ||
       (ch=='o') || (ch=='O') ||
       (ch=='u') || (ch=='U')
     )
   {
       return true;
   }
   else
   {
       return false;
   }
}

int main()
{
    char cValue;
    bool bRet=false;

    printf("Enter Characte \n");
    scanf("%c",&cValue);

    bRet=checkVowels(cValue);

    if (bRet==true)
    {
        printf("Given character  is vowel");
    }
    else{
        printf("Given character  is Not  vowel",cValue);
    }
    
}