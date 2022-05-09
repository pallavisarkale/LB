//Accept input from user and print below output

//Input: 5
//output : 5    4   3   2   1

#include<stdio.h>


void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter How many * you want to Display \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}