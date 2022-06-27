//Accept  string from user and copy string into anather string

#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
  while (*src!='\0')
  {
    if (*src>='A' && *src<='Z')
    {
      *src=*src+32;
    }
    else if (*src>='a' && *src<='z')
    {
      *src=*src-32;
    }
    *dest=*src;
    src++;
    dest++;
  }
  *dest='\0';//very imp
  
}

int main()
{
  char Arr[20];//bharleli vahi
  char Brr[20];//kori vahi

  cout<<"Enter String:"<<endl;
  //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
  cin.getline(Arr,20);
  
  strcpyX(Arr,Brr);

  cout<<"String after copy is : "<<Brr<<endl;

  return 0;
}