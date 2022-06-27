#include<stdio.h>


void DisplayR()
{
    static char iCnt = 'a';

    if(iCnt <='f')
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