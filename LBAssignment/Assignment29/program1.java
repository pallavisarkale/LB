package LB.LBAssignment.Assignment29;
import java.lang.*;
import java.util.Scanner;

class Bitwise1
{
    public boolean checkBit(int iNo)
    {
        int iMask=0X00004000;
        int iResult=0;

        iResult=iNo & iMask;

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
class program1
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println(iValue);

        Bitwise1 obj=new Bitwise1();

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