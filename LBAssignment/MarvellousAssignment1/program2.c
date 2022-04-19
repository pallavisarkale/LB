// write a program to print Marvellous  5 times on screen

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to display Marvellous 5 times on screen
//  Input :             Integer
//  Output :            5 time marvellous
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo1)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        printf("Marvellous \n");
    }
}
int main()
{
    int iValue1=0;
    printf("How many times you want to print Marvellous on screen: \n");
    scanf("%d",&iValue1);

    Display(iValue1);
return 0;
}