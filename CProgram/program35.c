//forword and backword loop

#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

void DisplayB(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
    }
}


int main()
{
    int iValue=0;

    printf("enter number:\n ");
    scanf("%d",&iValue);

    printf("Forword\n");
    DisplayF(iValue);

   printf("Backword\n");
   DisplayB(iValue);

    return 0;
}