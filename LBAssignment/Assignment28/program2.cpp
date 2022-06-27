//Accept  string from user and copy string into anather string

#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest,int icnt)
{
  while (*src!='\0')
  {
    if (*src!=' ')
    {
      
    *dest=*src;
    dest++;

    }
    src++;
  }
  *dest='\0';//very imp
  
}

int main()
{
  char Arr[20];
  char Brr[20];

  cout<<"Enter String:"<<endl;
  cin.getline(Arr,20);
  
  strcpyX(Arr,Brr,10);

  cout<<"String after copy is : "<<Brr<<endl;

  return 0;
}