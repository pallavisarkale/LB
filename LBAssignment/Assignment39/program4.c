#include<stdio.h>


int DisplayR(int no)
{
    int smallestDigit,i;
    while(no != 0)
    {
        i=no % 10;
        if (smallestDigit>i)
        {
            smallestDigit=i;
        }
        
        no = no / 10;
        DisplayR(no);
    }
    return smallestDigit;
}

int main()
{
    printf("Enter number: \n");
    int iNo=0;
    scanf("%d",&iNo);
    int iRet=DisplayR(iNo);
    printf("%d",iRet);

    return 0;
}