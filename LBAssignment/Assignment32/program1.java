package LB.LBAssignment.Assignment32;
import java.lang.*;
import java.util.Scanner;

class Bitwise1
{
    public int checkBit(int iNo)
    {
        int iMask=64;
        int Count=0;
        int iResult=0;

        iResult=iNo & iMask;

        if(iResult==1)
        {
            Count++;
        }
        return Count;

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

        int iRet=obj.checkBit(iValue);

        
    }
}