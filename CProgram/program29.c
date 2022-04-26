//Accept number from user and find the Non factors of that number 

//Input :10
//Output:   3       4       6       7       8       9

//Dry run:
//starting point =1; ending point iNo-1 i.e less than given number:
//Initiolization  i.e iCnt=i
//condition: iCnt<0
//desplacement iCnt++
//loop body : 
/*for(iCnt=1;iCnt<iNo;iCnt++)
{
    if(iNo%iCnt)!=0)
    {
    printf("%d\t",iCnt)
    }
}
*/


#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0) //Updater to convert negative number to positive
    {
        iNo=-iNo;//assignment operator
    }
//          1       2       3
    for (iCnt=1;iCnt<iNo;iCnt++)//1  2  4       2 4 3    2 4 3 until iCnt less than iNo iCnt<iNo
    {
        //4
        if((iNo%iCnt)!=0)//== is comparison operator
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter number: \n"); //accept number from user
    scanf("%d",&iValue);// scan number

    DisplayNonFactors(iValue);//function call

return 0;
}

//Time complexity O(n) depends on how many times iterate for loop