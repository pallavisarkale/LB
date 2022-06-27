//accept string from user and return count  of that small letters  using while
#include<stdio.h>

int CountSmall(char *str)
{
    static int count=0;

    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            count++;
        }
        str++;        
    }
    return count;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    iRet=CountSmall(arr);

    printf("Small characters in string ara: %d\n",iRet);


    return 0;
}

