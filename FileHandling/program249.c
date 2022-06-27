//accept file from user and count digits from that file 
//
/* Enter File name to open
Demo.txt
Count of capital character is: 1 
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty
#include<string.h>

#define FILESIZE 1024
int countSmall(char Fname[])
{
    char Data[FILESIZE];//because its read 1kb =1024 at time
    int fd=0,iRet=0, i=0,count=0;;

    fd=open(Fname,O_RDWR);
    if (fd==-1)
    {
       printf("Unable to open  file\n");
       return -1;
    }
   //run in times of 1024 times i.e 1kb due to Data[1024]
    while ((iRet=read(fd,Data,sizeof(Data)))!=0)//iRet is return value of read
    {
       for ( i = 0; i < iRet; i++)
       {
            if (Data[i]>='0' && Data[i]<='9')
            {
               count++;
            }
       }   
    }
    close(fd);
    return count;
}

int main()
{
    char Fname[20];
    int iRet=0;
    
    printf("Enter File name to open\n");
    scanf("%s",Fname);

    iRet=countSmall(Fname);
    printf("Count of Digits  is: %d ",iRet);

    
    return 0;
}
