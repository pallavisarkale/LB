//Accept N number from user and Return summation of that Elements

#include<stdio.h>
#include<stdlib.h>
int SumOfElements(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
            iSum=iSum+Arr[iCnt];        
        
    }
    return iSum;
}
int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0;
    int iRet=0;

    printf("Enter How Many Elements : \t");
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

    printf("Elements which Divisible by 5 is:\n");
    iRet=SumOfElements(ptr,iSize);
    printf("%d",iRet);

    free(ptr);

return 0;
}
