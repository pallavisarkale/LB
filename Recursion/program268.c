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

    if (iNo>i)
    {
        i++;
        Display(iNo);
        printf("%c\t",'a'+i);

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

