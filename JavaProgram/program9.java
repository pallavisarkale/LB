//Accept number from user and check whether it palindrom or not

package LB.JavaProgram;

import java.util.Scanner;


public class program9
{
    
    boolean revNum(int iNo)
    {
        
        int iNo1=0;
        int iSum=0;

        int iTemp=iNo;

        while(iNo>0)
        {
            iNo1=iNo%10;//getting remainder
            iSum=(iSum*10)+iNo1;
            iNo=iNo/10;
            
        }
        System.out.println(iSum);

        if(iTemp==iSum)
        {
            return true;
        }
        else{
            return false;
        }
    }
    public static void main(String[] args) {
        
        Scanner s=new Scanner(System.in);

        int iValue=0;
        boolean iRet=false;

        System.out.println("Enter number");
        iValue=s.nextInt();

        program9 p=new program9();

        iRet=p.revNum(iValue);

        if(iRet==true)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not Palindrome Number");
        }


    
    }
}