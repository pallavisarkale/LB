//accept number from   user and print  abcd.. using recursion
//in recursion we use only if  avoid while loop

//output
/*
Enter Number:
6
g       g       g       g       g       g
*/

#include<stdio.h>

void  Display(int iNo)
{
    static int i=0;
    static char ch='a';

    if (iNo>i)
    {
        i++;
        Display(iNo);
        printf("%c\t",ch);
        ch++;

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

