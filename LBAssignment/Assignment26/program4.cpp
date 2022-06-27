//Accept string from user and  return first occurence of given string

#include<iostream>
#include <string.h>
 using namespace std;

int displayLastOccurence(char s[],char ch)
{
   int i=0,k=0;
    for(i=strlen(s)-1;i>=0;i--)  
    {
    	if(s[i]==ch)
    	{
		  k=1;
    	  break;
		}
 	}
    if(k)
 	    printf("character  %c  is last occurrence at location:%d ",ch,i);
    else
        printf("character is not in the string ");
 return i;
}

int main()
{
    char s[20],c;  
    int i,n,k=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
   displayLastOccurence(s,c);
 	 
     
    return 0;
}