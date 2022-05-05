//Program of Array using pointer

#include<stdio.h>

void Display(int *ptr)//pointer for address of Arr[0],Arr[1],Arr[2],Arr[3],Arr[4] from main
{
    register int iCnt=0;
    printf("Elements in Array :\n");

    for(iCnt=0;iCnt<5;iCnt++)//
    {
         printf("%d\n",*ptr);//iCnt=0,ptr[100]=Arr[0]       iCnt=1,ptr[104]=Arr[1],     iCnt=2,ptr[108]=Arr[2],    iCnt=3,ptr[112]=Arr[3], iCnt=4,ptr[116]=Arr[4],    
         ptr++;//100 104   108   112  116  120  incremennt by 4
    }  
       
}
int main()
{
    auto int Arr[5];
    register int iCnt=0;

    printf("Enter Elemnts:\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }    

    Display(Arr);//call by Address

return 0;
}
