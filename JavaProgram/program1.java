//Write a Program to divide two numbers:

package LB.JavaProgram;

import java.util.*;

public class program1
{
    int Divide(int iNo1,int iNo2)
    {

        int iAns=0;

        if(iNo2==0)
        {
            System.out.println("Cant devide by 0");

            return 0;
        }
        else
        {
            iAns=iNo1/iNo2;
        }
        return iAns;
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;
        int iValue3=0;

        System.out.println("Enter first number: \n ");
        iValue1=s.nextInt();

        System.out.println("Enter second number: \n ");
        iValue2=s.nextInt();

        program1 p=new program1();
        iValue3=p.Divide(iValue1,iValue2);

        System.out.println("Dividation is : "+iValue3);

    }
}