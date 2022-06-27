package LB.JavaProgram;

import java.lang.*;
import java.util.Scanner;



class BitwiseOp
{
    public void DisplayBinary(int iNo)
    {
        int iDigit=0;

        while(iNo!=0)
        {
            iDigit=iNo%2;
            System.out.print(iDigit);
            iNo=iNo/2;
        }
        System.out.println();
    }
}
class program192
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseOp obj=new BitwiseOp();
        obj.DisplayBinary(iValue);
    }
}