//Accept N number from user  and return count of even element fron that numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%2)==0)
        {
            iCount++;
        }
        
    }
    return iCount;
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;
    int iRet=0;

    printf("Enter  How Many Numbers: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("Enter Elements \n");
    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    
    iRet=CountEven(ptr,iSize);
    printf("Even Count is  \n %d",iRet);
    

    free(ptr);  

    return 0;
}