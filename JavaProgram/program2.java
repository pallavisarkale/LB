//Write a Program to return given letter number of times:
//like letter="Hello", n=10 
//output will come 10 times Hello

package LB.JavaProgram;

import java.util.*;

public class program2
{
     void Display(int iNo1,String sLetter)
    {
        int iCnt=0;
        
           for(iCnt=1;iCnt<=iNo1;iCnt++)
           {
               System.out.println(" "+sLetter);
           }
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue1=0;
        String sValue1="";
       

        System.out.println("Enter  number you want: ");
        iValue1=s.nextInt();

        System.out.println("Enter String: ");
        sValue1=s.next();
        System.out.println();

        program2 p=new program2();

       p.Display(iValue1,sValue1);

    }
}