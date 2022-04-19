//Assignment 2
//Accept number from user and checkif number is less than 10 then print Hello otherWise print "Demo"
#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to print check number is less than 10 then print Hello  or if greter than 10 then  print Demo 
//  Input :             Integer
//  Output :            5 time marvellous
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo<10)
    {
        printf("Hello");
    }
    
    else
    {
        printf("Demo");
    }

}

int main()
{
    int iValue=0;

    printf("enter number to check ");
    scanf("%d",&iValue);

    Display(iValue);
  
return 0;
}