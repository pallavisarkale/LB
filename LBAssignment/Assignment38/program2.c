#include<stdio.h>


int DisplayR(int no)
{
    int sum=0,i;
    while(no != 0)
    {
        i=no % 10;
        sum=sum+i;
        no = no / 10;
        DisplayR(no);
    }
    return sum;
}

int main()
{
    int iRet=DisplayR(456);
    printf("%d",iRet);

    return 0;
}