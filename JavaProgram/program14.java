//Accept one character from user and conver case of that character
//Input :a output :A

package LB.JavaProgram;

import java.util.Scanner;


class caseConverter
{
    int checkCase(char ch)
    {
        
        if((ch>='a') &&(ch<='z'))
            {  
                 return 1;
            }
            else if ((ch>='A') &&(ch<='Z'))
            {
                return 0;
            }  
            else 
            {
                return -1;
            }    
    }
    
}

public class program14 {
    public static void main(String[] args) {
    
        Scanner s=new Scanner(System.in);

        char cValue=0;
        int bRet=0;

        System.out.println("Enter character to convert Case: ");
        cValue=s.next().charAt(0);

        caseConverter c=new caseConverter();
        bRet=c.checkCase(cValue);

        if(bRet==1)
        {
            System.out.println(Character.toUpperCase(cValue));
        }
        else  if(bRet==0)
        {
            System.out.println(Character.toLowerCase(cValue));

        }
        else {
            System.out.println("Invalid input");
        }
              
    }
}
