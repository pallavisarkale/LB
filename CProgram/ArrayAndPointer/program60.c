//Program to accept Dynamic number from user and allocate memory to array 

#include<stdio.h>
#include<stdlib.h>//for malloc and free

void Display(int Arr[],int iLength)
{
    register int iCnt=0;
    printf("Elements in Array :\n");

    for(iCnt=0;iCnt<iLength;iCnt++)//
    {
        //same like in program56.c
        printf("%d\n",Arr[iCnt]);
                                    
    }  
       
}
int main()
{
    register int iCnt=0;
    int *ptr=NULL;
    int iSize=0;

    printf("Enter how many numbers\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));//allocate memory to iSize variable   if you enter iSize 4 then iSize *sizeof(int)=4*4=16 

    printf("Enter Elements\n");
    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);  
    }

    Display(ptr,iSize);
    free(ptr);//deallocate memory 
    return 0;
}