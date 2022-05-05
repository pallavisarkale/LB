//Accept N number from user and Return all elements bet given range 

#include<stdio.h>
#include<stdlib.h>

void  DisplayInRange(int Arr[],int iLength,int iLower,int iHigher)
{
    int iCnt=0;
    int iCount=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]>=iLower)&&(Arr[iCnt]<=iHigher))
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }
}

int main()
{
    int *ptr=NULL;
    int iCnt=0;
    int iSize=0,iStart=0,iEnd=0;


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

    printf("Enter where to Start : \t");
    scanf("%d",&iStart);

    printf("Enter where to End : \t");
    scanf("%d",&iEnd);

    DisplayInRange(ptr,iSize,iStart,iEnd);
    
    free(ptr);

return 0;
}
