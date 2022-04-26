//Accept choice from user for gold coin  and return bill using switch case
//1 gram=4000     2 gram=8000    5 gram=20000      10 gram=40000


#include<stdio.h>

void JwellersPortal(int iWeight,int iRate)
{
   int rate=0;
   
   if (iWeight==0)
   {
      printf("Wieght can not be 0");
   }
   else
      {   
      switch (iWeight)
      {
      case 1:
         rate=1*iRate;
         printf("your bill is :%d",rate);
         break;

      case 2:
         rate=2*iRate;
         printf("your bill is : %d",rate);
         break;

      case 5:
         rate=5*iRate;
         printf("your bill is : %d",rate);
         break;   

      case 10:
         rate=10*iRate;
         printf("your bill is : %d",rate);
         break;   

      default:
         printf(" gold coin available in range 1,2,5 and 10 gram ");

      }
   }
}
int main()
{
   int iValue=0;
   int iValue2=0;

   printf("Enter Rate of per gram \n");
   scanf("%d",&iValue2);
   
   printf("Enter gram of coin you want \n");
   scanf("%d",&iValue);

   

   JwellersPortal(iValue ,iValue2);

return 0;
}