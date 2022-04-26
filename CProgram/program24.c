//Accept number from user and check whether number is divisible by 5 and 3 
//using int rather than bool

//use bool insted of int because int required 32 bit more memory than bool

#include<stdio.h>

int Check(int iNo)
{
   if (
         ( (iNo%3)==0 ) &&
         ( (iNo%5)==0 )
      )
   {
     return 1;
   }
   else
   {
      return 0;
   }
}
int main()
{
   int iValue=0;
   int iRet=0;//default value is 0 ;

   printf("enter Number \n");
   scanf("%d",&iValue);

   iRet=Check(iValue);
   if (iRet==1)
   {
      printf("%d is  divisible by 5 and 3 \n ",iValue);
   }
   else
   {
      printf("%d is not divisible by 5 and 3\n ",iValue);
   }
   

   return 0;
}