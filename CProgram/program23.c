//Accept number from user and check whether number is divisible by 5 and 3

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
   if (
         ( (iNo%3)==0 ) &&
         ( (iNo%5)==0 )
      )
   {
     return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   int iValue=0;
   bool bRet=false;//default value is 0 =false;

   printf("enter Number \n");
   scanf("%d",&iValue);

   bRet=Check(iValue);
   if (bRet==true)
   {
      printf("%d is  divisible by 5 and 3 \n ",iValue);
   }
   else
   {
      printf("%d is not divisible by 5 and 3\n ",iValue);
   }
   

   return 0;
}