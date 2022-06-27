//do 4 th bit on
//input 7
//output- 15

package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseFor4th
{
    public int onBit(int iNo)
    {
        int iMask=0X00000008;

        int iResult=iNo | iMask;

        return iResult;
        
    }
}
class program198
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseFor4th obj=new BitwiseFor4th();

        int iRet=obj.onBit(iValue);
        System.out.println(iRet);
    }
}