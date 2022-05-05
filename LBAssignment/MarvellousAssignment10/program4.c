//Accept N number from user and Return all elements which contains 3 digit in it

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt=0;
    int iCount=0;
    int iDigit=0;
    int iNo=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        iCount=0;
        iNo=Arr[iCnt];

        while (iNo>0)
        {
            iDigit=iDigit%10; 
            iCount++;
            iNo=iNo/10;

        }
        if (iCount==3)
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

    printf("Three Digit Elements are \n");
    Display(ptr,iSize);
    
    free(ptr);

return 0;
}
