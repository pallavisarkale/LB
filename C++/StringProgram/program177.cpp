//Accept string from user and convert into lowercase

#include<iostream>
 using namespace std;

void strwrX(char str[])
{
   while (*str!='\0')
   {
    if (*str>='A' && *str<='Z')
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
   
   strwrX(Arr);
   cout<<"String is in Lower Case:"<<Arr<<endl;

   return 0;
 }