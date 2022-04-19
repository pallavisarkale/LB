#include<stdio.h>

void display(int iNo)
{
    int iCnt=0;
    for (iCnt = 0; iCnt <iNo ; iCnt++)
    {
        for (int j = iCnt-1; j <=0 ; j--)
        {
        printf("\n"); 
        }
       printf("* ");       
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter count you want\n");
    scanf("%d",&iValue);

    display(iValue);
}
