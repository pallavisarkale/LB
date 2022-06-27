//Count frequency diff bet cap and small from given string

#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    int CountCap=0;

    while (*str!='\0')
    {
        if (*str>='A' && *str<='Z')
        {
           CountCap++; 
        }
        str++;
    }
    
    return CountCap;
}

int CountSmall(char *str)
{
    int CountS=0;

    while (*str!='\0')
    {
        if (*str>='a' && *str<='z')
        {
           CountS++; 
        }
        str++;
    }
    
    return CountS;
}

int Frequency(int A,int B)
{
    int diff=0;
    if (A>=B)
    {
       diff=A-B;
    }
    else if(B>=A)
    {
        diff=B-A;
    }
    
    return diff;
}
int main()
{
    char arr[20];
    int iRetCap=0,iRetSamll=0,iRetDiff;

   cout<<"Enter String:"<<endl;
   //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
   cin.getline(arr,20);
   
   iRetCap=CountCapital(arr);
   iRetSamll=CountSmall(arr);

   cout<<"Count of Samll letters in String  :"<<iRetSamll<<endl;
   cout<<"Count of Cappital letters in String  :"<<iRetCap<<endl;

   iRetDiff=Frequency(iRetCap,iRetSamll);
   cout<<"difference in freq of Cap and Samll letters in String  :"<<iRetDiff<<endl;



        return 0;
}