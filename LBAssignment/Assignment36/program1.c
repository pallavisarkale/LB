#include<stdio.h>


void DisplayR()
{
    static int iCnt = 0;

    if(iCnt < 5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();         // Recurssive call
    }
}

int main()
{
    DisplayR();

    return 0;
}