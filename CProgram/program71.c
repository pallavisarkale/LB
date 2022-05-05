//Accept N number from user and Return Multiplication of that Elements

#include<stdio.h>
#include<stdlib.h>

int MultElement(int Arr[],int iLength)
{
    int iCnt=0;
    int iMult=1;
    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        iMult=iMult*Arr[iCnt];
    }
    return iMult;
}
int main()
{
    int iCnt=0,iSize=0;
    int *ptr=NULL;
    int iRet=0;

    printf("Enter how many elements: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));
    printf("Enter Values:\n");

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=MultElement(ptr,iSize);
    printf("%d",iRet);

    free(ptr);//free memory
    
}