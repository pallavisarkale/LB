//Accept percentage f from user and check whether student is in which class like pass,fail,distingtion 
//0 to 35 --------------> Fail
//35 to 50 ------------->Pass
//50 to 60 ------------->Second class
//60 to 70  ------------>first class
//70 to 100 ------------>first class with Distingtion

package LB.JavaProgram;

import java.util.Scanner;


public class program6 {

    void Display(float fPerc)
    {
        if(
            (fPerc>=0) && (fPerc<35)
        ){
            System.out.println("Fail class");
        } 
        else if(
            (fPerc>=35) && (fPerc<50)
        ){
            System.out.println("Pass class");
        } 
        else if(
            (fPerc>=50) && (fPerc<60)
        ){
            System.out.println("Second class");
        }  
        else if(
            (fPerc>=60) && (fPerc<70)
        ){
            System.out.println("First class");
        } 
        else if(
            (fPerc>=70) && (fPerc<=100)
        ){
            System.out.println("First class with Distinction");
        } 
        else{
            System.out.println("Invalid input");
        }

    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        float fValue=0;
        
        System.out.println("Enter number you want");
        fValue=s.nextFloat();

        program6 p=new program6();
        p.Display(fValue);

    }
    
}
