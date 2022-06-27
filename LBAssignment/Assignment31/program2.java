//accept number from use and toggle 4th bit
//input=   output


package LB.LBAssignment.Assignment31;
import java.lang.*;
import java.util.Scanner;

class BitwiseHex
{
    public int onBit(int iNo)
    {
        int iMask=0X00000440;

        int iResult=iNo ^ iMask;

        return iResult;
        
    }
}
class program2
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseHex obj=new BitwiseHex();

        int iRet=obj.onBit(iValue);
        System.out.println("updated number  "+iRet);
    }
}