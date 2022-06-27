
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char Fname[20];
    char Data[100];
    int fd=0;
    int iRet=0;

    printf("Enter File mame to open\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
   
    if (fd==-1)
    {
       printf("Unable to creat   file\n");
       return -1;
    }
    printf("File is successfully create with FD %d\n",fd);
    
    return 0;
}