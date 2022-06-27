//accept number from   user and print  abcd.. using recursion
//in recursion we use only if  avoid while loop
#include<stdio.h>

void  Display(int iNo)
{
    static char ch='a';

    if (iNo>0)
    {
        printf("%c\t",ch);
        ch++;
        iNo--;
        Display(iNo);

    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);



    return 0;
}

