//accept string  from   user and print  alphabet using recursion
//in recursion we use only if  avoid while loop

//output
/*
Enter string:
qwe
q       w       e
*/

#include<stdio.h>

void  Display(char *str)
{
    if (*str!='\0')
    {
        printf("%c\t",*str);
        Display(++str);//

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

