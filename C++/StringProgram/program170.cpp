//Iterate String  and Display using getline

#include<iostream>
 using namespace std;

int strlenX(char str[])//*str and str[] are same
{
   int iCount=0;//if not initialize to then got sigmentation fault

   while (*str!='\0')
   {
      iCount++;
      str++;
   }
   return iCount;
}

 int main()
 {
   int iRet=0;

   char Arr[20];

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(Arr,20);
   
   iRet=strlenX(Arr);
   cout<<"String Length is :"<<iRet<<endl;

   return 0;
 }