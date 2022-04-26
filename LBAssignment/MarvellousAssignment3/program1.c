//Assignment 3
// Accept number from user and print that number of even numbers of screen

#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      printEven
//  Description :       print even numbers
//  Input :             Integer
//  Output :            even numbers 
//  Date :              21/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////
void printEven(int iNo)
{
    int iCnt=0;
    int iNo1;

    if (iNo<=0)
    {
        return;
    }
    for (iCnt=1;iCnt<=iNo;iCnt++)
        {
            iNo1=iCnt*2;
            printf("Even number is : %d \n" ,iNo1);
        }  
    
}

int main()
{
    int iValue1=0;
    
    printf("how many  number wants  to display : \n");
    scanf("%d",&iValue1);

    printEven(iValue1);

    
return 0;
}