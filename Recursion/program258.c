//accept array from user and return summation of that array
#include<stdio.h>

int Sum(int Arr[],int length)
{
    int iSum=0,i=0;

    for ( i = 0; i < length; i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
    
}



int main()
{
    int Brr[]={10,20,30,40};
    int iRet=0;

    iRet=Sum(Brr,4);
    printf("Summation is : %d\n",iRet);

    return 0;
}

