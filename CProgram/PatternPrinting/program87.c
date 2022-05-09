//Accept input from user and print below output
//Number line pattern

//Input: 6
//output : 1    *   3   *   5   *

#include<stdio.h>

//Logic:
//1 2 3 4 5 6  if iCnt is even print * if odd print iCnt
//1 * 3 * 5 *

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)//1 2  3  4  5  6
    {
       if ((iCnt%2)==0)     //icnt : 2    4   6
       {
        printf("*\t",iCnt);//  *    *   *
       }
       else
       {
           //iCnt : 1  3   5   
            printf("%d\t",iCnt);
       }
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