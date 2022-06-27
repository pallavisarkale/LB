#include<stdio.h>


int DisplayR(int no)
{
    int largestDigit=0,i;
    while(no != 0)
    {
        i=no % 10;
        if (largestDigit<i)
        {
            largestDigit=i;
        }
        
        no = no / 10;
        DisplayR(no);
    }
    return largestDigit;
}

int main()
{
    int iRet=DisplayR(456);
    printf("%d",iRet);

    return 0;
}