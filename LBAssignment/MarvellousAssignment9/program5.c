//Accept N number from user and return product of all Odd number

#include<stdio.h>
#include<stdlib.h>

int  Product(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount=0;
    int iMult=1;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%2)!=0)
        {
            iMult=iMult*Arr[iCnt];
        }
        
    }
    return iMult;
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

    iRet=Product(ptr,iSize);
    
    printf("Product is :  %d ",iRet);

    free(ptr);

return 0;
}
