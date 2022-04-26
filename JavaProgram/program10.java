package LB.JavaProgram;

import java.util.Scanner;


public class program10 {

    boolean Check(String sStr)
    {
        String str1="";
        String sTemp=sStr;
        int iCnt=0;
        int iLength=sStr.length();

        for(iCnt=iLength-1;iCnt>=0;iCnt--)//
        {
            str1=str1+sStr.charAt(iCnt);
        }

        if(sTemp.equals(str1))
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

        String sValue="";
        boolean bRet=false;

        System.out.println("Enter string you want: ");
        sValue=s.next();

        program10 p=new program10();
        
        bRet=p.Check(sValue);

        if(bRet==true)
        {
            System.out.println("Palindrome String");
        }
        else{
            System.out.println("Not Palindrome String");
        }


    }
    
}
