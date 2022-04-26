package LB.JavaProgram;

import java.util.Scanner;

//Accept number from user and print that number of even numbers of screen


class dispEvenNumber
{
    void displayEven(int iNo)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<iNo;iCnt++)
        {
            if((iCnt%2)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class program11
{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;

        System.out.println("Enter number :");
        iValue=s.nextInt();

        dispEvenNumber disp=new dispEvenNumber();

        disp.displayEven(iValue);


    }
}