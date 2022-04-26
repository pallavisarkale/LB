//Accept number from user and check whether number is even or odd


package LB.JavaProgram;

import java.util.Scanner;

public class program4 {
    public  boolean checkEven(int iNo)
    {   
        if(iNo%2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter number to check wheater even or odd");
        iValue=s.nextInt();

        program4 p=new program4();

        bRet=p.checkEven(iValue);
       // System.out.println(bRet);

        if(bRet==true)
        {
            System.out.println("Even number");
        }
        else
        {
            System.out.println("Odd number");
        }      
    }
}
