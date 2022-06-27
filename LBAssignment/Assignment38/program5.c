#include<stdio.h>


int DisplayR(int no)
{
    int mult=1,i;
    while(no != 0)
    {
        i=no % 10;
        mult=mult*i;
        no = no / 10;
        DisplayR(no);
    }
    return mult;
}

int main()
{
    int iNo=0;
    printf("Enter Numeber:\n");
    scanf("%d",&iNo);

    int iRet=DisplayR(iNo);
    printf("%d",iRet);

    return 0;
}