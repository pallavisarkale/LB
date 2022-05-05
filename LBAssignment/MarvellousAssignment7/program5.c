//Accept N number from user and Display all elements which are multiple of 11

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    int iSumEven=0,iSumOdd=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if ((Arr[iCnt]%11)==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
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
       printf("Unable to allocate memory to ptr");
       return -1;
    }
    
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

    printf("Elements which multiple of 11 is  :\n");

    Display(ptr,iSize);

    free(ptr);


return 0;

}
