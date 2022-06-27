//open file  and write data into it using open 
//drawback is overrite previous data

//Output
/*
Enter File name to open
LB20.txt
File is successfully opened with FD 3
Enter Data that you want to write
Marvellous
10 Data that you write in File:
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


    fd=open(Fname,O_RDWR);//open file wit read & write only
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to open  file\n");
       return -1;//Fail to open
    }
    printf("File is successfully opened with FD %d\n",fd);

    printf("Enter Data that you want to write\n");
    scanf(" %[^'\n]s",Data);

    iRet=write(fd,Data,strlen(Data));
    printf("%d Data that you write in File ",iRet);

    
    return 0;
}