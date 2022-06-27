 //count  white spaces from given String

#include<iostream>
using namespace std;

int CountWhiteSpaces(char *str)
{
  int count=0;
   while (*str!='\0')
   {
    
      if (*str==' ')
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

   cout<<"Enter String:"<<endl;
   cin.getline(arr,20);
   
   iRet=CountWhiteSpaces(arr);
   cout<<"Count of white spacess= "<<iRet<<endl;


  

    return 0;
}