import java.util.Scanner;

class AllFunctions
{
    public int Addition()
    {
        int a=0;
        int b=0;

        Scanner s=new Scanner(System.in);
        int iSum=0;

        System.out.println("Enter First Number You want: ");
        a=s.nextInt();

        System.out.println("Enter Second Number You want:");

        b=s.nextInt();
        iSum=a+b;

        return iSum;
    }
    public int SubStraction()
    {
        int a=0;
        int b=0;

        Scanner s=new Scanner(System.in);
        int iSub=0;

        System.out.println("Enter First Number You want:");
        a=s.nextInt();

        System.out.println("Enter Second Number You want:");

        b=s.nextInt();
        iSub=a-b;

        return iSub;
    }
    public int Multiplication()
    {
        int a=0;
        int b=0;

        Scanner s=new Scanner(System.in);
        int iMult=0;

        System.out.println("Enter First Number You want:");
        a=s.nextInt();

        System.out.println("Enter Second Number You want:");

        b=s.nextInt();
        iMult=a*b;

        return iMult;
    }
    
    public int Division()
    {
        int a=0;
        int b=0;

        Scanner s=new Scanner(System.in);
        int iDiv=0;

        System.out.println("Enter First Number You want:");
        a=s.nextInt();

        System.out.println("Enter Second Number You want:");

        b=s.nextInt();
        iDiv=a/b;

        return iDiv;
    }
    public int Reminder()
    {
        int a=0;
        int b=0;

        Scanner s=new Scanner(System.in);
        int iRem=0;

        System.out.println("Enter First Number You want:");
        a=s.nextInt();

        System.out.println("Enter Second Number You want:");

        b=s.nextInt();
        iRem=a%b;

        return iRem;
    }
    public void DisplayString()              // Defination
    {
        Scanner s=new Scanner(System.in);
        int iNo;
        String str1;

        System.out.println("How many times you want to print ");
        iNo=s.nextInt();
        if(iNo < 0)         // Filter
        {
            System.out.println("Please enter positive value");
            return;
        }

        System.out.println("Enter string to print");
        str1=s.next();

        int iCnt ;

        for( iCnt = 1;  iCnt<iNo ;iCnt++)
        {
            System.out.println(str1);
        }
    }

    public boolean CheckEven()
    {
        int iNo=0;

        Scanner s=new Scanner(System.in);
        System.out.println("Enter number to check even or not:");
        iNo=s.nextInt();

        if ((iNo%2)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Library {
    
    public static void main(String[] args) {

        AllFunctions f=new AllFunctions();

        //System.out.println("Addition=: "+f.Addition());
        //System.out.println("Substraction =:"+f.SubStraction());
        //System.out.println("Multiplication=: "+f.Multiplication());
        //System.out.println("Division =:"+f.Division());
        //System.out.println("Reminder =:"+f.Reminder());
        //f.DisplayString();
        /*
        boolean bRet=false;
        bRet=f.CheckEven();
        if(bRet==true)
        System.out.println("Even Number");
        else
        System.out.println("Odd Number");

        */
        



        


    }
}
