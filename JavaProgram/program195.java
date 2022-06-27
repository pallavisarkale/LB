//21 th bit is on 1048576
package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseFor21
{
    public boolean checkBit(int iNo)
    {
        int iMask=1048576;
        int iResult=0;//2 rest to power

        iResult=iNo & iMask;//1 & 1 =1 and other are 0

        if(iResult==0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
}
class program195
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseFor21 obj=new BitwiseFor21();

        boolean bRet=obj.checkBit(iValue);

        if(bRet==true)
        {
            System.out.println("Bit is On");
        }
        else
        {
            System.out.println("Bit is off");
        }
    }
}