//Accept percentage f from user and check whether student is in which class like pass,fail,distingtion 
//0 to 35 --------------> Fail
//35 to 50 ------------->Pass
//50 to 60 ------------->Second class
//60 to 70  ------------>first class
//70 to 100 ------------>first class with Distingtion
#include<stdio.h>

void DisplayClass(float fMarks)
{
   if (
         (fMarks>=0.0) &&
         (fMarks<35.0)
      )
   {
      printf("Your Fail \n");
   }
   else if (
            (fMarks>=35.0) &&
            (fMarks<50.0)
           )
   {
      printf("Your Pass class  \n");
   }
   else if (
            (fMarks>=50.0) &&
            (fMarks<60.0)
            )
   {
      printf("Your Second class \n");
   }
   else if (
            (fMarks>=60.0) &&
            (fMarks<70.0)
            )
   {
      printf(" First class \n");
   }
   else if (
            (fMarks>=70.0) &&
            (fMarks<100.0)
            )
         {
            printf(" Distinction \n");
         }
   else  {
      //works like filter --- if put marks less than 0 or greater than 100 
            printf(" Invalid Marks \n");
         }      
}


int main()
{
   float fValue=0.0;

   printf("Enter percentage \n");
   scanf("%f",&fValue);

   DisplayClass(fValue);

   return 0;
}