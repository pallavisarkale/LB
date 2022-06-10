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

   cout<<"Enter String:"<<endl;//Hello World
   scanf("%s",Arr);//cout and scanf unable to handle whilespace. unable to print world due to space
   
   Display(Arr);

   return 0;
 }