//accept string  from   user and print  alphabet using recursion
//in recursion we use only if  avoid while loop

//output
/*
Enter string:
Enter string:
Hello
        o       l       l       e
*/

#include<stdio.h>

void  Display(char *str)
{
    if (*str!='\0')
    {
        Display(++str);//tail recursion
        printf("%c\t",*str);

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

