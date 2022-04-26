package LB.JavaProgram;

//Accept one character from user and conver case of that character
//Input :a output :A


import java.util.Scanner;


class ConvertCaseProgram
{
    public int checkCase(char ch)
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

    public void convertCase(char ch)
    {
        int bRet=0;
        bRet=checkCase(ch);

        if(bRet==1)
        {
            System.out.println(Character.toUpperCase(ch));
        }
        else  if(bRet==0)
        {
            System.out.println(Character.toLowerCase(ch));

        }
        else {
            System.out.println("Invalid input");
        }
    } 
}

public class program15 {
    public static void main(String[] args) {
    
        Scanner s=new Scanner(System.in);

        char cValue=0;

        System.out.println("Enter character to convert Case: ");
        cValue=s.next().charAt(0);

        ConvertCaseProgram c=new ConvertCaseProgram();
        c.convertCase(cValue);
        
              
    }
}
