//accept number from use and toggle 4 th and 7th bit
//input=   output


package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseHexa2
{
    public int onBit(int iNo)
    {
        int iMask=0X00000048;

        int iResult=iNo ^ iMask;

        return iResult;
        
    }
}
class program201
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseHexa2 obj=new BitwiseHexa2();

        int iRet=obj.onBit(iValue);
        System.out.println("updated number  "+iRet);
    }
}