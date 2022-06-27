//accept file from user and read from 10 byte  using Lseek 
/* read from end i.e 2
Enter file name
LB20.txt
vwxyz
*/
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>



int main()
{
    char Fname[20];
    char Data[10];
    int fd=0;

    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if (fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }
    
//lseek(kashyat,kiti,kuthun)
    lseek(fd,5,1);//0-start or 1-current or 2-end

    read(fd,Data,5);
    write(1,Data,5);//read data from 10 to next 5

    return 0;
}