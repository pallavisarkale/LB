//accept number from   user and print  abcd.. using recursion
//in recursion we use only if  avoid while loop

//output
/*Enter Number:
4
a       b       c       d
*/

#include<stdio.h>

void  Display(int iNo)
{
    static int i=0;

    if (iNo>i)
    {
        printf("%c\t",'a'+i);
        i++;
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

