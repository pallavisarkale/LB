//Count samll  from given string

#include<iostream>
using namespace std;


int CountSmall(char *str)
{
    int Count=0;

    while (*str!='\0')
    {
        if (*str>='a' && *str<='z')
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
   
   iRet=CountSmall(arr);
   cout<<"Count of Samll letters in String  :"<<iRet<<endl;
        return 0;
}