//Accept N number from user and Return Last Occurence

#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt=0;

    for (iCnt=iLength-1;iCnt>=0;iCnt--)
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
        return iCnt;
    }
    
}
int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0;
    int iValue=0;
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

    printf("Enter element to search: ");
    scanf("%d",&iValue);

    iRet=LastOccurence(ptr,iSize,iValue);

    if (iRet==-1)
    {
        printf("Element  not present in Array : \t");
    }
    else{
        printf("Last Occurence is : %d  th Index",iRet);
    }
    
    free(ptr);


return 0;

}
