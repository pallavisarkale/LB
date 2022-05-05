//Accept N number from user and and accept anathor number and find that number how many time that number comes

#include<stdio.h>
#include<stdlib.h>

int checkOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iMult=1;
    int iCount=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iCnt=0,iSize=0;
    int *ptr=NULL;
    int iRet=0;
    int iValue=0;

    printf("Enter how many elements: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));
    printf("Enter Values:\n");

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to check how many times that elements come: \n");
    scanf("%d",&iValue);

    iRet=checkOccurence(ptr,iSize,iValue);
    printf("count is %d",iValue,iRet);

    free(ptr);//free memory
    
}