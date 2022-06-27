//Accept string from user and convert into lowercase

#include<iostream>
 using namespace std;

int checkChar(char str[],char ch)
{
  int count=0;
   while (*str!='\0')
   {
    if (*str==ch)
    {
      count++;
    }
    
    str++;
     
   }
return count;
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