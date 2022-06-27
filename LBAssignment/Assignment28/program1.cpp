//Accept  string from user and reverse that string inplace

#include<iostream>
using namespace std;

void strReverseX(char *str)
{
  char *start=str;
  char *end=str;
  char temp;
  
  while (*end!='\0')//itrate till last
  {
    end++;
  }
  end--;
  
  while (start<end)//
  {
    temp=*start;
    *start=*end;
    *end=temp;

    start++;
    end--;
  }
}

int main()
{
  char Arr[20];

  cout<<"Enter String:"<<endl;
  //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
  cin.getline(Arr,20);
  
  strReverseX(Arr);

  cout<<"String after Reverse is : "<<Arr<<endl;

  return 0;
}