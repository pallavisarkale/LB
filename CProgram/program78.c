//Accept N number from user and accept one number from user and return index of LAst  occurence that number 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    for (iCnt=iLength-1;iCnt>=0;iCnt--)
    {
         if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
        return iCnt;
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

    printf("Enter element to search: \n");
    scanf("%d",&iValue);

    iRet=SearchLastOccurence(ptr,iSize,iValue);

    if (iRet==-1)
    {
        printf("Elements not present ",iValue);
    }
    else
    {
        printf("Last occure index is %d ",iRet);
    }
    

    free(ptr);//free memory
    return 0;
    
}