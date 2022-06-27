//accept file from user and count white spaces  from that file of file
//LB20.txt
/* output
Enter File name to open
Demo.txt
Count of white spaces is: 3 

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>//file control libraty
#include<string.h>

//micro like 1024   2048 .....

#define FILESIZE 1024

int countSmall(char Fname[])
{
   //because its read 1kb =1024 at time micro
   char Data[FILESIZE];
   
   int fd=0,iRet=0, i=0,count=0;

   fd=open(Fname,O_RDWR);
   if (fd==-1)
   {
      printf("Unable to open  file\n");
      return -1;
   }
   //run in times of 1024 times i.e 1kb due to Data[1024] we can write Data[2048] also
   while ((iRet=read(fd,Data,sizeof(Data)))!=0)
   {
      for ( i = 0; i < iRet; i++)
      {
         if (Data[i]==' ')
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
    printf("Count of white spaces is: %d ",iRet);

    
    return 0;
}
