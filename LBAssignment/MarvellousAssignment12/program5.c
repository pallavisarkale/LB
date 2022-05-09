//Accept number from user and display below pattern
//Input : 4
//output:    

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    int iMult=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)//1 2 3 4 5 6 7 8
    {
        iMult=1;
        
        iMult=iCnt*2;
        printf("%d\t",iMult);
           
    }
}
int main()
{
    int iValue=0;

    printf("Enter Value : ",&iValue);
    scanf("%d",&iValue);

    Display(iValue);
}