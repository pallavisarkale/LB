//accept file from user and count length of file
//LB20.txt
/* output
Enter File name to open
LB20.txt
File is successfully opened with FD 3
abcdefghijklmnopqrstuvwxyz
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty
#include<string.h>

void DisplayData(char Fname[])
{
    char Data[10];
    int fd=0;
    int iRet=0;

    fd=open(Fname,O_RDWR);
    if (fd==-1)
    {
       printf("Unable to open  file\n");
       return;
    }
    printf("File is successfully opened with FD %d\n",fd);

    while ((iRet=read(fd,Data,sizeof(Data)))!=0)//iRet is return value of read
    {
        write(1,Data,iRet); 
    }
    
    close(fd);
}

int main()
{
    char Fname[20];
    
    printf("Enter File name to open\n");
    scanf("%s",Fname);

    DisplayData(Fname);
    
    return 0;
}
