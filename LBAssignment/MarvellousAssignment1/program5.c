//Accept number from user and print * on screen;


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      display
//  Description :       print * on screen
//  Input :             Integer
//  Output :            *
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////


#include<stdio.h>

void display(int iNo)  
{
    int iCnt=0;
    while (iCnt<iNo)
    {
        printf("*\n");
        iCnt++;
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter Number you want\n");
    scanf("%d",&iValue);
    

    display(iValue);

    return 0;
}