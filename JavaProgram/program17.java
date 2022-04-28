//Accept number from user and check wheather it perfect or not


package LB.JavaProgram;

import java.util.Scanner;
class checkPerfectNum
{
    boolean checkPerfect(int iNo)
    {
        int iCnt=0;
        int iSum=0;
        for(iCnt=1;iCnt<=(iNo/2) && (iSum<=iNo);iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if(iSum==iNo)
        {
            return true;
        }
        else {
            return false;
        }

    }
}
public class program17
{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        int iValue=0;
        boolean bRet=false;
        System.out.println("Enter number");
        iValue=s.nextInt();

        checkPerfectNum c=new checkPerfectNum();

        bRet=c.checkPerfect(iValue);

        if(bRet==true)
        {
            System.out.println("Perfect");
        }
        else{
            System.out.println(" not Perfect");

        }
        
    }
}
