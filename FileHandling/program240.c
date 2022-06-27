//open file  and write data into it using open  
//append data with existing code
//Output
/*
Enter File name to open
LB20.txt
File is successfully opened with FD 3
Enter Data that you want to write
Infosystems
11 Data that you write in File
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
    char Data[100];//for write data
    int fd=0;//file descripter
    int iRet=0;

    printf("Enter File name to open\n");
    scanf("%s",Fname);//& not required due to char array

    fd=open(Fname,O_RDWR |O_APPEND);//open file with read & write mode and write data with append  
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to open  file\n");
       return -1;//Fail to open
    }
    printf("File is successfully opened with FD %d\n",fd);

    iRet=read(fd,Data,10);//read data of file
    printf("%d read successfully from file ",iRet);

    printf("data from file:%s\n",Data);

    
    return 0;
}