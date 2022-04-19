//Program to display 1 to 5 on Screen using while loop

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
       iNo=-iNo;
    }
    
    
    iCnt=1;//initioalization like for loop
    while (iCnt<=iNo)//condition like for loop
    {
        printf("%d\n",iCnt);
        iCnt++;//increment
    }
    
}
int main(){

   int iValue=0;
    printf("Enter Number to print from \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}