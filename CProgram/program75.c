//Accept N number from user and and accept anathor number and check  that number present or not
//using Flag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    bool bFlag=false;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           bFlag=true;
           break;
        }
    }
    return bFlag;
}

int main()
{
    int iCnt=0,iSize=0;
    int *ptr=NULL;
    bool bRet=false;
    int iValue=0;

    printf("Enter how many elements: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));
    printf("Enter Values:\n");

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to search: \n");
    scanf("%d",&iValue);

    bRet=Search(ptr,iSize,iValue);

    if (bRet==true)
    {
        printf("%d is present in Array: ",iValue);
    }
    else
    {
        printf("%d is not present in Array: ",iValue);
    }
    

    free(ptr);//free memory
    return 0;
    
}