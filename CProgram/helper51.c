#include "header51.h"   //only include header .h files
//only Function 

ULONG Power(int iNo1,int iNo2)//see renaming on line 9
{
    //loop counter should be register with register if you required many times then use register keyword 
    register int iCnt=0;

    ULONG iMult=1;//multiplication should be long

    
//        iNo1=2 ,iNo2=3
//        1       2       3   //iCnt=1       iCnt=2   iCnt=3
    for(iCnt=1;iCnt<=iNo2;iCnt++)// 1 2 4    2  4 3     2 4 3
    {
        iMult=iMult*iNo1;//4    1*2=2          2*2=4    4*2=8   output=2^3=8
    }
return iMult;
}
