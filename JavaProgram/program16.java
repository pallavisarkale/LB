//Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not


package LB.JavaProgram;

import java.util.Scanner;
class vowelsProgram
{
    boolean checkVowel(char ch)
    {
        if(
            (((ch=='a') ||(ch== 'A'))) || 
            (((ch=='e') ||(ch== 'E'))) || 
            (((ch=='i') ||(ch== 'I'))) ||
            (((ch=='o') ||(ch== 'O'))) ||
            (((ch=='u') ||(ch== 'U')))
        )
        {
            return true;
        }
        else {
            return false;
        }
    }
}
public class program16
{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);

        char ch=0;
        boolean bRet=false;

        System.out.println("Enter character: ");
        ch=s.next().charAt(0);

        vowelsProgram v=new vowelsProgram();

        bRet=v.checkVowel(ch);

        if(bRet==true)
        {
            System.out.println("Vowel");
        }
        else{
            System.out.println("Consonent");

        }


        
    }
}
