//create file  using creat and write data
//Output
/*
Input:Enter File mame to create  India.txt
File is successfully created with FD 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty
#include<string.h>

int main()
{
    char Fname[20];//char array for file name
    char Data[100];//for write data
    int fd=0;//file descripter
    int iRet=0;

    printf("Enter File mame to create\n");
    scanf("%s",Fname);//& not required due to char array


    fd=creat(Fname,0777);
    if (fd==-1)//-1 means Fail
    {
       printf("Unable to create file\n");
       return -1;//Fail to create
    }
    printf("File is successfully created with FD %d\n",fd);
    
    printf("Enter the data you want to write in file\n");
    scanf(" %[^'\n']s",Data);//space before % is required

//read:4  write:2  execute:1
//permitions   0_owner_group_others
    
    iRet=write(fd,Data,strlen(Data));//how much data is write
    printf("%d byte Data  is successfully write in file" ,iRet);


    return 0;
}