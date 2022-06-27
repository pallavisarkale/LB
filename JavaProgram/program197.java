//14 th bit is on 
//input 8192
//output- Bit is ON

package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseFor1
{
    public boolean checkBit(int iNo)
    {
        int iMask=0X00004000;             //8192;
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
class program196
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        BitwiseForHex obj=new BitwiseForHex();

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