//accept number and position from user and toggle bit of that position
//input= 12 , ipos =4   output-33
/*
 Enter Number :
49
Enter position :
6
updated number  17
 */


package LB.JavaProgram;
import java.lang.*;
import java.util.Scanner;

class BitwiseHexa3
{
    public int toggleBit(int iNo,int iPos)//
    {
        int iMask=0X00000001;//set to 0ne 
        int iResult=0;

        if((iPos<=0) || (iPos>32))
        {
            System.out.println("Invalid Position");
            return 0;
        }
        
        iMask=iMask<<(iPos-1);//dynamic mask

        iResult=iNo ^ iMask;

        return iResult;
        
    }
}
class program202
{
    public static void main(String[] args) {
        
        Scanner sobj=new Scanner(System.in);
        
        System.out.println("Enter Number :");
        int iValue=sobj.nextInt();

        System.out.println("Enter position :");
        int iPos=sobj.nextInt();


        BitwiseHexa3 obj=new BitwiseHexa3();

        int iRet=obj.toggleBit(iValue,iPos);
        System.out.println("updated number  "+iRet);
    }
}