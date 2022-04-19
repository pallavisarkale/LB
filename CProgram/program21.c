//Accept number from user and return summation
//input=4 o/p=4+3+2+1=10


#include<stdio.h>

int Summation(int iNo)
{
   
   int iCnt=0;
   int  iSum=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)//1     2     3     4
   {
      iSum=iSum+iCnt;      //0+1=1        1+2=3    3+3=6    6+4=10
   }
   return iSum;
}

int main()
{
   
   int iValue=0;

   printf("enter the number \n");
   scanf("%d",&iValue);

   int iRet=Summation(iValue);

   printf("Summation is : %d",iRet);

   return 0;
}
