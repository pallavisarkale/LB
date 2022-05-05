//Program of Array using for loop

#include<stdio.h>

int main()
{
    auto int Arr[5];//one diamentional array with static memory:auto  storage class
    register int iCnt=0;

    printf("Enter Elemnts:\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }    

    printf("Elements in Array :\n");

    for(iCnt=0;iCnt<5;iCnt++)
    {
         printf("%d\n",Arr[iCnt]);
    }  
       
return 0;
}
