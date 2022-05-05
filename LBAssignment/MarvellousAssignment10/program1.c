//Accept N number from user and return Largest number from it

#include<stdio.h>
#include<stdlib.h>

int  LargestNumber(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount=0;
    int iMax=Arr[0];

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if (iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0;
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

    iRet=LargestNumber(ptr,iSize);
    
    printf("Largest Element  is :  %d ",iRet);

    free(ptr);

return 0;
}
