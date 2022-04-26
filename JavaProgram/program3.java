//Accept number from user and return summation
//input=4 o/p=4+3+2+1=10


package LB.JavaProgram;

import java.util.Scanner;

public class program3 {

    int Display(int iNo)
    {
        int iAns=0;
        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iAns=iAns+iCnt;
        }

        return iAns;
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;
        int iRet=0;

        System.out.println("Enter number to do Summation: ");
        iValue=s.nextInt();

        program3 p=new program3();

        iRet=p.Display(iValue);
        System.out.println(iRet);


    }
}
