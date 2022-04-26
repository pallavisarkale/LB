//Accept number from user and check whether number is divisible by 5 and 3 

package LB.JavaProgram;

import java.util.Scanner;

public class program7 {
     boolean check(int iNo)
    {
        if(
            ((iNo%3)==0) &&
            ((iNo%5)==0)
        )
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
        boolean iRet=false;

        System.out.println("Enter number to check  that divisible by 5 and 3");

        iValue=s.nextInt();

        program7 p=new program7();

        iRet=p.check(iValue);
        if(iRet==true)
        {
            System.out.println(+iValue +"  is Divisible by 5 and 3");
        }
        else
        {
            System.out.println(+iValue +"   is not Divisible by 5 and 3");
        }
        
    }
}
