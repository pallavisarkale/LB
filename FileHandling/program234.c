//create file  using creat
//Output
/*
Input:Enter File mame to create  India.txt
File is successfully created with FD 3

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty

int main()
{
    char Fname[20];//char array for file name
    int fd=0;//file descripter

    printf("Enter File mame to create\n");
    scanf("%s",Fname);//& not required due to char array

    fd=creat(Fname,0777);
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to create file\n");
       return -1;//Fail to create
    }
    printf("File is successfully created with FD %d\n",fd);

    return 0;
}