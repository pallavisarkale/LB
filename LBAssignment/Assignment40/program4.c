
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

    //fd=creat(Fname,0777);
    fd=open(Fname,O_RDONLY);
    if (fd==-1)
    {
       printf("Unable to open  file\n");
       return -1;
    }
    printf("File is successfully opened with FD %d\n",fd);
     iRet=read(fd,Data,10);//read data of file
    printf("%d byte data read successfully from file ",iRet);
    
    return 0;
}