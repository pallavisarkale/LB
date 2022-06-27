//Accept string from check giver character present in that or not

#include<iostream>
 using namespace std;

bool checkChar(char str[],char ch)
{
   while (*str!='\0')
   {
    if (*str==ch)
    {
      return true;
    }
    else
    {
      return false;
    }
    str++;
     
   }

}

 int main()
 {
   char Arr[20];
   char ch;
   bool bRet=false;

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(Arr,20);

  cout<<"Enter character which want to check in string:"<<endl;
  scanf("%c",&ch);
   
   bRet=checkChar(Arr,ch);

   if (bRet==true)
   {
    cout<<"Given char is present in string"<<endl;

   }
   else
   {
        cout<<"Given char not  present in string"<<endl;

   }
   

   return 0;
 }