//Accept N number from user  and Display Even numbercount even element fron that numbers

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%2)==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;

    printf("Enter  How Many Numbers: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("Enter Elements \n");
    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Even Elements are: \n");
    DisplayEven(ptr,iSize);
    

    free(ptr);  

    return 0;
}