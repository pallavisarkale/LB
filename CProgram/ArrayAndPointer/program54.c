//Program of Array using for loop with function

#include<stdio.h>

void Display(int Arr[5])
{
    register int iCnt=0;

    printf("Elements in Array :\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
         printf("%d\n",Arr[iCnt]);
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

    Display(Arr);

return 0;
}
