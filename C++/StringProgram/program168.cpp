//Iterate String  and Display using pointer

#include<iostream>
 using namespace std;

void Display(char str[])//*str and str[] are same
{
   while (*str!='\0')
   {
      cout<<*str<<endl;
      str++;
   }
   
}

 int main()
 {
   char Arr[20];

   cout<<"Enter String:"<<endl;
   scanf("%[^'\n']s",Arr);   //print all Hello world 
   Display(Arr);

   return 0;
 }