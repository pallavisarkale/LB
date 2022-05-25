import java.util.*;

class Pattern
{
    private int iRow,iCol;

    public Pattern(int a,int b)
    {
        this.iRow=a;
        this.iCol=b;
    }

    public void DisplayPattern()
    {
        int i=0,j=0;
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class PatternPrinting
{
    public static void main(String arg[])
    {
        Pattern p=new Pattern(4,4);

        p.DisplayPattern();
    }
}