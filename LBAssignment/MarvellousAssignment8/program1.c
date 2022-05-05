//Accept N number from user and Return Frequency of Even number

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iLength)
{
    int iCnt=0;
    int iEvenCount=0;


    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%2)==0)
        {
            iEvenCount++;
        }
    }
    return iEvenCount;
    
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
    
    iRet=CountFrequency(ptr,iSize);

    printf("Count of Even Elemnts is: %d",iRet);

    free(ptr);

return 0;

}
