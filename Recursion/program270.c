//accept number from   user and print  abcd.. using recursion
//in recursion we use only if  avoid while loop

//output
/*
avfg
a       v       f       g
*/

#include<stdio.h>

void  Display(char *str)
{
    if (*str!='\0')
    {
        printf("%c\t",*str);
        str++;
        Display(str);

    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);



    return 0;
}

