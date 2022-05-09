/*Problems on Pattern printing
In this topic we have to Display the specific pattern on screen by using iterative approach i.e loops.
There are two types of patterns as Linear and Non Leaniar 
in case of Linear pattern we can use single loop
in case of non-linear patterns we can use nested loops-more than one loop
the target of this printing pattern is used to clear the loop designing stratergies.*/
//Accept number from user and display bellow pattern

//Input: 5
//output : A B C D E

#include<stdio.h>


void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\t");
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