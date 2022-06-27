//Count Capitals from given string

#include<iostream>
using namespace std;


int CountCapital(char *str)
{
    int Count=0;

    while (*str!='\0')
    {
        if (*str>='A' && *str<='Z')
        {
           Count++; 
        }
        str++;
    }
    
    return Count;
}
int main()
{
    char arr[20];
    int iRet=0;

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(arr,20);
   
   iRet=CountCapital(arr);
   cout<<"Count of Capitals letters in String  :"<<iRet<<endl;
        return 0;
}