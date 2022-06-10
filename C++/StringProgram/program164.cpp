//String iterate using while

#include<iostream>
 using namespace std;


 int main()
 {
   int i=0;
   char Arr[]="Hello";
   
   while (Arr[i]!='\0')
   {
      cout<<Arr[i]<<endl;
      i++;
   }
    return 0;
 }