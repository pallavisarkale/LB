//Accept 2 files from user and compare both file
/*
Enter first file name to compare
Demo1.txt
Enter second file name that you want to compare
Demo.txt
Both file are Same
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>

#define FILESIZE 1024

bool FileComp(char Source[], char Destination[])
{
    int Fdsrc = 0, Fddest = 0, iRet1 = 0,iRet2=0, iComp=0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];


    Fdsrc = open(Source,O_RDONLY);
    if(Fdsrc == -1)
    {
        printf("Unable to open source file\n");
        return false;
    }

    Fddest = open(Destination,O_RDONLY);

    if(Fddest == -1)
    {
        printf("Unabel to open Destination file\n");
        return false;
    }

   while (1)//unconditional loop infinite loop like for(;;)
   {
     iRet1=read(Fdsrc,Buffer1,FILESIZE);
     iRet2=read(Fddest,Buffer2,FILESIZE);

     if ((iRet1==0)||(iRet2==0)||(iRet1!=iRet1))
     {
       break;
     }
     //memcmp inbuild function
     iComp=memcmp(Buffer1,Buffer2,iRet1);
     if (iComp!=0)
     {
        break;
     }
   }
   close(Fdsrc);
   close(Fdsrc);
   
    if (iRet1==0 && iRet2==0)
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
    char Fname1[20];
    char Fname2[20];
    bool bRet;

    printf("Enter first file name to compare\n");
    scanf("%s",Fname1);

    printf("Enter second file name that you want to compare\n");
    scanf("%s",Fname2);

    bRet=FileComp(Fname1, Fname2);
    if (bRet==true)
    {
        printf("Both file are Same");
    }
    else
    {
        printf("Both file are not  Same");

    }

    return 0;
}