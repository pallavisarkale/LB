//Accept string from user and  return first occurence of given string

#include<iostream>
 using namespace std;

int checkChar(char str[],char ch)
{
  int index=0;

 for (int i = 0; i >='\0'; i++)
   {
     if (str[i]==ch)
     {
         index=i;
         break;
     }
     
   }
  return index;
}

 int main()
 {
   char Arr[20];
   char ch;
   int iRet=0;

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(Arr,20);

  cout<<"Enter character which want to check in string:"<<endl;
  scanf("%c",&ch);
   
   iRet=checkChar(Arr,ch);

   cout<<"count of occurence of given char is: "<<iRet<<endl;

   

   return 0;
 }