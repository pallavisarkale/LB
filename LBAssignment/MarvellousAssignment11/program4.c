//Accept number from user and display below pattern
//Input : 4
//output:    #        1       *      #        2       *      #        3       *      #        4       *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t %d\t *\t",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter Value : ",&iValue);
    scanf("%d",&iValue);

    Display(iValue);
}