//Accept number from user and print that factorial of that  number


package LB.JavaProgram;

import java.util.Scanner;

class Factorial
{
    void displayFactorial(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=(iNo/2);iCnt++)//iCnt<=(iNo/2) to reduce time complexity
        {
            if((iNo%iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

public class program12 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;

        System.out.println("enter number :");
        iValue=s.nextInt();

        Factorial f=new Factorial();
        f.displayFactorial(iValue);

    }
}
