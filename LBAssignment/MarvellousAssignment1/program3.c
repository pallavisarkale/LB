// write a program to print Marvellous  5 times on screen

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
    for(int i=iNo;i>=1;i--)
    {
        printf(" %d",i);
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