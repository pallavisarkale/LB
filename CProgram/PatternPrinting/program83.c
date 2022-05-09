//Accept input from user and print below output

//Input: 4
//output : 1    2   3   4   4   3   2   1

//Complexity: O(2N)

#include<stdio.h>


void Display(int iNo)
{
    int iCnt=0;
    for (iCnt=1;iCnt<=iNo;iCnt++)//1    2   3   4
    {
        printf("%d\t",iCnt);
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)//4 3   2   1
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