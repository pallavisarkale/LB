//Accept string from user and count number of 

#include<iostream>
 using namespace std;

int countVowels(char str[])
{
   int iCnt=0;
   while (*str!='\0')
   {
     if ((*str=='a' || *str=='e' || *str=='i' || *str=='u' || *str=='o')
          || (*str=='A' || *str=='E' || *str=='I' || *str=='U' || *str=='O'))
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
   
   iRet=countVowels(Arr);
   cout<<"vowels are String  :"<<iRet<<endl;

   return 0;
 }