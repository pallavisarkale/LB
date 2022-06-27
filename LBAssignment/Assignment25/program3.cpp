//Accept string from user and Toggle the String (upperCase=Lower and Lower to upper)

#include<iostream>
 using namespace std;

void strToggleX(char str[])
{
   while (*str!='\0')
   {
    if (*str>='a' && *str<='z')
    {
      *str=*str-32;
    }
    else if (*str>='A' && *str<='Z')
    {
      *str=*str+32;
    }
    str++;
     
   }

}

 int main()
 {
   char Arr[20];

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(Arr,20);
   
   strToggleX(Arr);
   cout<<"String is in Toggle Case:"<<Arr<<endl;

   return 0;
 }