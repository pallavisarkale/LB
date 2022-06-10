//Accept string from user and count occurence of Capital letters

#include<iostream>
 using namespace std;

int countCap(char str[])
{
   int iCnt=0;
   while (*str!='\0')
   {
     if ((*str>='A')&&(*str<='Z'))//&& must be there  because both condition required true
     {
       iCnt++;
     }
     str++;
   }
   return iCnt;

}

 int main()
 {
   int iRet=0;

   char Arr[20];

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(Arr,20);
   
   iRet=countCap(Arr);
   cout<<"Count of Capitals letters in String  :"<<iRet<<endl;

   return 0;
 }