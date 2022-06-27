//do 27 th bit on
//input 67108864   output- 67108864
//input 1   output- 67108864


package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseHexa
{
    public int onBit(int iNo)
    {
        int iMask=0X04000000;

        int iResult=iNo | iMask;

        return iResult;
        
    }
}
class program199
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseHexa obj=new BitwiseHexa();

        int iRet=obj.onBit(iValue);
        System.out.println("updated number  "+iRet);
    }
}