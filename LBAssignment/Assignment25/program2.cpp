//Accept string from user and convert into uppercase

#include<iostream>
 using namespace std;

void strUperX(char str[])
{
   while (*str!='\0')
   {
    if (*str>='a' && *str<='z')
    {
      *str=*str-32;
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
   
   strUperX(Arr);
   cout<<"String is in Upperwer Case:"<<Arr<<endl;

   return 0;
 }