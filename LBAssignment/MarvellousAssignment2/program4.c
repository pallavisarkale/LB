// Accept two numbers from user and print first number in  second number of time
#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:      Display
//  Description :       print 1st number in times of 2nd number
//  Input :             Integer,Integer  5,3
//  Output :            5 5 5
//  Date :              19/04/2022
//  Author :            Pallavi Sarkale
//
/////////////////////////////////////////////////////////////////////

void display(int iNo1,int iNo2)
{
    int iCnt=0;
   /* while (iCnt<iNo2)
    {
        printf("%d\n",iNo1);
        iCnt++;

    }
    */
   //
   for (iCnt=0;iCnt<iNo2;iCnt++)
   {
        printf("%d\n",iNo1);
   }
      
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    

    printf("enter number to print\n");
    scanf("%d",&iValue1);

    printf("enter how many times you want to  print %d\n",iValue1);
    scanf("%d",&iValue2);

    display(iValue1,iValue2);


   
return 0;
}