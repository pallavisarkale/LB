//Accept N number from user and check wheather elements contains 11 or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0;


    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
           break;
        }
        
    }

    if (iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0,iValue=0;
    bool bRet=false;


    printf("Enter How Many Elements : ");
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

    printf("Enter Elements to check : ");
    scanf("%d",&iValue);

    bRet=Check(ptr,iSize,iValue);

    if (bRet==-1)
    {
        printf("%d  does not present in elements:",iValue);
    }
    else
    {
        printf("%d   present in elements:",iValue);
    }
    

    free(ptr);

return 0;
}
