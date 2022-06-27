//open file  read only using open 
//Output
/*
Enter File mame to create
LB20.txt
File is successfully opened with FD 3
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

    printf("Enter File mame to create\n");
    scanf("%s",Fname);//& not required due to char array


    fd=open(Fname,O_RDONLY);//open file wit read only
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to open  file\n");
       return -1;//Fail to open
    }
    printf("File is successfully opened with FD %d\n",fd);
    
    return 0;
}