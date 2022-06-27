 //Display Digits from given String

#include<iostream>
using namespace std;

void Displaydigit(char *str)
{

   while (*str!='\0')
   {
      if (*str>='0' && *str<='9')
      {
        cout<<*str<<end
      }
      
      str++;
   }
}
int main()
{
    char arr[20];
    bool bRet=false;

   cout<<"Enter String:"<<endl;
   cin.getline(arr,20);
   
   Displaydigit(arr);


  

        return 0;
}