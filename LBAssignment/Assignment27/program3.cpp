//copy only capital letter
#include<iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
  while (*src!='\0')
  {
   if ((*src>='A') && (*src<='Z'))
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
  char Arr[20];//bharleli vahi
  char Brr[20];//kori vahi

  cout<<"Enter String:"<<endl;
  //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
  cin.getline(Arr,20);
  
  strcpyX(Arr,Brr);

  cout<<"String after copy is : "<<Brr<<endl;

  return 0;
}