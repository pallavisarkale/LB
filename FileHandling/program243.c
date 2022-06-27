//accept file from user and display whole data from that file dynamic
//Output
/*

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty
#include<string.h>

//O_RDONLY :Read
//O_WRONLY :Write
//O_RDWR    :Read + Write

int main()
{
    char Fname[20];//char array for file name
    char Data[10];//for access data to read
    int fd=0;//file descripter
    int iRet=0;

    printf("Enter File name to open\n");
    scanf("%s",Fname);//& not required due to char array

    fd=open(Fname,O_RDWR);//open file with read & write mode
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to open  file\n");
       return -1;//Fail to open
    }
    printf("File is successfully opened with FD %d\n",fd);

    while ((iRet=read(fd,Data,sizeof(Data)))!=0)//iRet is return value of read
    {
        write(1,Data,iRet); 
    }
    
    close(fd);
    return 0;
}
