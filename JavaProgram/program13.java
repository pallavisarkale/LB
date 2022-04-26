//Accept number from user and print that even factorial of that  number

package LB.JavaProgram;

import java.util.Scanner;

class EvenFactorial
{
    void DispEvenFact(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=(iNo/2);iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                if((iCnt%2)==0)
                {
                 System.out.println(iCnt);
                }
            }
        }

    }
}
public class program13 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter number: ");
        iValue=s.nextInt();

        EvenFactorial e=new EvenFactorial();
        e.DispEvenFact(iValue);

    }
}
