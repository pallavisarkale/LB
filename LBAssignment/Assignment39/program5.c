#include<stdio.h>


void DisplayR(int no)
{
    int i;
    if(no != 0)
    {
        i=no % 10;
        printf("%d",i);
        no = no / 10;
        DisplayR(no);
    }
}

int main()
{
    int iNo=0;
    printf("Enter Numeber:\n");
    scanf("%d",&iNo);

   DisplayR(iNo);

    return 0;
}