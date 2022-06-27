//Count frequency diff bet cap and small from given string

#include<iostream>
using namespace std;

bool CheckVowels(char *str)
{

    while (*str!='\0')
    {
        if ((*str=='a')|| (*str=='A')||(*str<='E')||(*str=='e')||(*str=='I')||(*str=='i')||(*str=='O')||(*str=='o')||(*str=='U')||(*str=='U'))
        {
          return true;
          break;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    bool bRet=false;

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(arr,20);
   
   bRet=CheckVowels(arr);


  
    if (bRet==true)
    {
        printf("String contains Vowels");
    }
    else
    {
        printf("String  not contains Vowels");

    }
    


        return 0;
}