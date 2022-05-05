//Accept N number from user and return largest number from that number

#include<stdio.h>
#include<stdlib.h>

int MaxElement(int Arr[],int iLength)//input=Arr[]={1,-2,3,2,4,-1}, iLength=6
{
    int iCnt=0;
    int iMax=Arr[0];//first element from array

    for (iCnt=0;iCnt<iLength;iCnt++) //iCnt=0 1 2 3 4 5
    {
        if (iMax<Arr[iCnt])//Arr[0]<Arr[0]=1<1 false then iMax is same as previous
                            // Arr[0]<Arr[1]= 1<-1 false then iMax 1
                            //Arr[0]<Arr[2]=1<3 true then iMax=3
                            //  Arr[0]<Arr[3]=3<2 false then iMax is 3 same for other elements  .........
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}
int MinElement(int Arr[],int iLength)
{
    int iCnt=0;
    int iMin=Arr[0];

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        if (iMin>Arr[iCnt])
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iCnt=0,iSize=0;
    int *ptr=NULL;
    int iRet=0,iRet1=0;

    printf("Enter how many elements: \n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize *sizeof(int));
    printf("Enter Values:\n");

    for (iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=MaxElement(ptr,iSize);
    printf("MAx Element is : %d\n",iRet);

    iRet1=MinElement(ptr,iSize);//for return minimum
    printf("Min Element is : %d",iRet1);


    free(ptr);//free memory
    
}