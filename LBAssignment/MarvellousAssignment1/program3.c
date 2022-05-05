// write a program to  Used to print 5 to 1 number on screen

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       Used to print 5 to 1 number on screen
//  Input :             Integer
//  Output :            5 time marvellous
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf(" %d",iCnt);
    }

}

int main()
{
    int iValue=0;

    printf("enter from which number you want to print\n");
    scanf("%d",&iValue);

    Display(iValue);
  
return 0;
}