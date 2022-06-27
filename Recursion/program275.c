//accept string  from   user and print  alphabet  in reverse using recursion(String Reverse)
//in recursion we use only if  avoid while loop

//output
/*
Enter string:
abcde
abcde
bcde
cde
de
e

*/

#include<stdio.h>

void  Display(char *str)
{
    if (*str!='\0')
    {
        printf("%s\n",str);
        Display(str+1);//tail recursion


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

