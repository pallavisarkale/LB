//Program of Array using pointer

#include<stdio.h>

void Display(int ptr[])//Array used like pointer
{
    register int iCnt=0;
    printf("Elements in Array :\n");

    for(iCnt=0;iCnt<5;iCnt++)//
    {
        //same like in program56.c
        printf("%d\n",ptr[iCnt]);//100+0=100 then print elements on address 100
                                    //100+1=104 data on 104
                                    //100+2=108 then print elements on address 108
                                    //100+3=112 then print elements on address 112
                                    //100+4=116 then print elements on address 116
                                    
    }  
       
}
int main()
{
    auto int Arr[5];
    register int iCnt=0;

    printf("Enter Elemnts:\n");
    
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }    

    Display(Arr);//call by Address

return 0;
}


//IMP
//Arr[2] is consider as *(Arr+2)
//*(2+Arr);
//2[Arr]