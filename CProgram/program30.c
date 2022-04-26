//Accept number from user and find the  factors of that number  and reduce time complexity

//Input :10
//Output:1      2   5

//Dry run:
//starting point =1; ending point iNo-1 i.e less than given number:
//Initiolization  i.e iCnt=i
//condition: iCnt<=iNo/2
//desplacement iCnt++
//loop body : 
/*for(iCnt=1;iCnt<=(iNo/2);iCnt++)
{
    if(iNo%iCnt)==0)
    {
    printf("%d\t",iCnt)
    }
}
*/


#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0) //Updater to convert negative number to positive
    {
        iNo=-iNo;//assignment operator
    }
//          1       2       3
    for (iCnt=1;iCnt<=(iNo/2);iCnt++)//reduce time complexity: iCnt<=(iNo/2);
        //4
        if((iNo%iCnt)==0)//== is comparison operator
        {
            printf("%d\t",iCnt);
        }
    }
int main()
{
    int iValue=0;
    printf("Enter number: \n"); //accept number from user
    scanf("%d",&iValue);// scan number

    DisplayFactors(iValue);//function call

return 0;
}

//Time complexity O(n/2)