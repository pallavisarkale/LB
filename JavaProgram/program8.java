//Accept number from user and check whether it prime or not

package LB.JavaProgram;

import java.util.Scanner;


public class program8
{
   public boolean checkPrime(int iNo)
    {
        if(
            (iNo==0) ||
            (iNo==1)
        )
        {
            return false;
        }
        else if(iNo%2==0)
        {
            return false;
        }
        else{
            return true;
        }
    }
    public static void main(String[] args) {
        
        Scanner s=new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter number you want to check prime or not");

        iValue=s.nextInt();

        program8 p=new program8();
        
        bRet=p.checkPrime(iValue);
        if(bRet==true)
        {
            System.out.println(iValue +" Prime number");
        }
        else{
            System.out.println(iValue+" Not Prime number");
        }

    }
}