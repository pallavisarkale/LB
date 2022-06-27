#include<stdio.h>


void DisplayR()
{
    static int iCnt = 5;

    if(iCnt!=0)
    {
        printf("%d\t *\t",iCnt);
        iCnt--;
        DisplayR();         // Recurssive call
    }
}

int main()
{
    DisplayR();

    return 0;
}