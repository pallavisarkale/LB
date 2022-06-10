//Accept string from user and count White space

#include<iostream>
 using namespace std;

int countCap(char str[])
{
   int iCnt=0;
   while (*str!='\0')
   {
     if (*str==' ')//&& must be there  because both condition required true
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
   cout<<"Count of white Space in String  :"<<iRet<<endl;

   return 0;
 }