//accept string  from   user and print  alphabet  in reverse using recursion(String Reverse)
//in recursion we use only if  avoid while loop

//output
/*
Enter string:
Hello
Hello
o       l       l       e       H
*/

#include<stdio.h>

void  Display(char *str)
{
    if (*str!='\0')
    {
        Display(str+1);//Head recursion
        printf("%c\t",*str);

    }
}

int main()
{
    char Arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);//call by address Display(920)



    return 0;
}

