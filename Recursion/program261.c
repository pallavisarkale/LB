//accept array from user and return summation of that array using recursion
#include<stdio.h>

int Sum(int Arr[],int length)
{
    static int iSum=0;

    if(length>0)//4
    {
        iSum=iSum+Arr[length-1];
        length--;//3  2  1  0
        Sum(Arr,length);
        
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

