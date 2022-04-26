//Accept choice from user for gold coin  and return bill using switch case
//1 gram=4000     2 gram=8000    5 gram=20000      10 gram=40000

package LB.JavaProgram;

import java.util.Scanner;

public class program5 {

    void jwellerPortal(int iWeight)
    {
        switch(iWeight)
        {
            case 1:
                System.out.println("your bill is 4000");
                break;
             
            case 2:
                System.out.println("your bill is 8000");
                break;   
                
            case 5:
                System.out.println("your bill is 20000");
                break;

            case 10:
                System.out.println("your bill is 40000");
                break;

            default:
                System.out.println("Invalid");    

        }
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;
        System.out.println("Enter coin weight :");
        iValue=s.nextInt();

        program5 p=new program5();
        p.jwellerPortal(iValue);


    }
}
