//Accept  2 string from user and concat them

#include<iostream>
using namespace std;

void strconcatX(char *src,char *dest)
{
  while (*src!='\0')//goto till last letter
  {
    src++;
  }
  //end to src string
  while (*dest!='\0')//after src print dest
  {
    *src=*dest;
     src++;
     dest++;
  }
  *src='\0';
  
}

int main()
{
  char Arr[20];//bharleli vahi
  char Brr[20];//kori vahi

  cout<<"Enter First String:"<<endl;
  //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
  cin.getline(Arr,20);
  
  cout<<"Enter Second String:"<<endl;
  cin.getline(Brr,20);

  strconcatX(Arr,Brr);

  cout<<"String after concat is : "<<Arr<<endl;

  return 0;
}