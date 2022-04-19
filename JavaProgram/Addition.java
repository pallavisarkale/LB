
//
package LB.JavaProgram;

import java.util.Scanner;

public class Addition {

    
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int iNo1=0;
        int iNo2=0;
        int iNo3=0;

        System.out.println("Enter first Number: ");
        iNo1=s.nextInt();

        System.out.println("Enter second Number: ");
        iNo2=s.nextInt();

        iNo3=AddFunction.Add(iNo1,iNo2);

        System.out.println("Addition is :" +iNo3);

    }
    
}
