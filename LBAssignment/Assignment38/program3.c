#include<stdio.h>


int strlen(char *arr)
{
    int iCnt;
    if (*arr=='\0')
    {
       return 0;
    }
    else
    {
        return 1+strlen(arr);
    }
    return iCnt;

}

int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter string: \n");
    scanf("%s",arr);

    iRet=strlen(arr);
    printf("%d",iRet);

    return 0;
}