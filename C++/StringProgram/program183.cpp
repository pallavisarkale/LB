//Accept  2 string from user and concat them

#include<iostream>
using namespace std;

bool strComX(char *src,char *dest)//src=hello ,dest=hello
{
  while ((*src!='\0') &&(*dest!='\0'))//*src==h,*dest==h
  {
    if (*src!=*dest)//
    {
     break;
    }
    src++;
    dest++;
    
  }
  if (*src=='\0' && *dest=='\0')
  {
    return true;
  }
  else
  {
    return false;
  }
  

}
int main()
{
  bool bRet;
  char Arr[20];//bharleli vahi
  char Brr[20];//kori vahi

  cout<<"Enter First String:"<<endl;
  //scanf("%[^'\n']s",Arr);   //print all Hello world  regex [^'\n']
  cin.getline(Arr,20);
  
  cout<<"Enter Second String:"<<endl;
  cin.getline(Brr,20);

  bRet=strComX(Arr,Brr);


  if (bRet==true)
  {
    cout<<"Are Equal"<<endl;
  }
  else
  {
    cout<<"Are  Not Equal"<<endl;
   
  }

  return 0;
}