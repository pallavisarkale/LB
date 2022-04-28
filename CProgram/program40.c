//Accept number fro user  and display seperate digits 
//INPUT: 7856
//OUTPU: 6587
//Time complexity: O(N) 
//how many digits- if 7856 then loop itert 4 times 

//Accept number from user and returns the count of digit

#include<stdio.h>

void DisplayDigit(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit=0;
    while(iNo>0)//while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\t",iDigit);
        iNo=iNo/10;
    } 
}

int main()
{
    int iValue=0;

    printf("enter number \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}