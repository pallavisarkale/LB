#include<stdio.h>


void DisplayR()
{
    static char iCnt = 'A';

    if(iCnt <='F')
    {
        printf("%c\t",iCnt);
        iCnt++;
        DisplayR();         // Recurssive call
    }
}

int main()
{
    DisplayR();

    return 0;
}