//Accept choice from user for gold coin  and return bill using if else 
//1 gram=4000     2 gram=8000    5 gram=20000      10 gram=40000


#include<stdio.h>

void JwellersPortal(int iWeight)
{
   if (iWeight==1)
   {
      printf("your bill is :4000");
   }
   else if(iWeight==2)
   {
      printf("your bill is :8000");
   }
   else if(iWeight==5)
   {
      printf("your bill is :20000");
   }
   else if(iWeight==10)
   {
      printf("your bill is :40000");
   }
   else
   {
      printf("Invalid");
   }

}
int main()
{
   int iValue=0;

   printf("Enter gram of coin you want \n");
   scanf("%d",&iValue);


   JwellersPortal(iValue);

return 0;
}