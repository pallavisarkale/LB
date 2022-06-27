#include<iostream>
using namespace std;


int CountWhiteSpaces(char *str)
{
  int count=0;
   while (*str!='\0')
   {
    
      if (*str>='a' && *str<='z')
      { 
        return 1 + CountWhiteSpaces(str + 1);
      }
      
      str++;
   }
   return count;
}


int main()
{
    int iRet=0;

    char arr[20];

    printf("Enter string: \n");
    cin.getline(arr,20);

    iRet=CountWhiteSpaces(arr);
    printf("%d",iRet);

    return 0;
}