//accept string  from user and return count of small letter using recursion
//in recursion we use only if  avoid while loop
#include<stdio.h>

int CountSmall(char *str)
{
    static int count=0;

    if (*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            count++;
        }
        str++;
        CountSmall(str);
        
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

