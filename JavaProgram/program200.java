//accept number from use and toggle 4th bit
//input=   output


package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseHexa1
{
    public int onBit(int iNo)
    {
        int iMask=0X00000008;

        int iResult=iNo ^ iMask;

        return iResult;
        
    }
}
class program200
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseHexa1 obj=new BitwiseHexa1();

        int iRet=obj.onBit(iValue);
        System.out.println("updated number  "+iRet);
    }
}