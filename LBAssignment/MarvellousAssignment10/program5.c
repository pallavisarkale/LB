//Accept N number from user and Return all elements which contains 3 digit in it

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt=0;
    int iSum=0;
    int iDigit=0;
    int iNo=0;

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        iSum=0;
        iNo=Arr[iCnt];

        while (iNo>0)
        {
            iDigit=iNo%10; 
            iSum=iSum + iDigit;
            iNo=iNo/10;
        }  
        printf("%d\n",iSum);
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

    printf("summation of  Digit  are \n");
    Display(ptr,iSize);
    
    free(ptr);

return 0;
}
