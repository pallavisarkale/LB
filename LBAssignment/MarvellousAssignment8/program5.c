//Accept N number from user and Return frequency of number like 11 

#include<stdio.h>
#include<stdlib.h>

int  frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0,iValue=0;
    int iRet=0;


    printf("Enter How Many Elements :");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize* sizeof(int));

    if (ptr==NULL)
    {
        printf("Unable to allocate memory: ");
        return -1;
    }
    
    printf("Enter the Elements :\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter Element to check frequency : \t");
    scanf("%d",&iValue);

    iRet=frequency(ptr,iSize,iValue);
    
    printf("Frequency of %d  is :  %d ",iValue,iRet);

    free(ptr);

return 0;
}
