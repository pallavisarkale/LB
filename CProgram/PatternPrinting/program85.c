//Accept input from user and print below output
//Number line pattern

//Input: 4
//output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

//-iNo=4 to iNo=4 //Complexity O(N)

void Display(int iNo)
{
    int iCnt=0;
    //  1          2         3
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)//iCnt=-4  iCnt=-3   iCnt=-2    iCnt=-1 iCnt=0 iCnt=1 iCnt=2 iCnt=3 iCnt=4
    {
        printf("%d\t",iCnt);//4     -4          -3      -2          -1      0       1     2       3     4 

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