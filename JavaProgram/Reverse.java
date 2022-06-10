package LB.JavaProgram;


class Program1
{
    int iNo=123456;
       
     int iCount=0;
     int iDigit=0;
     int CountSize()
    {
        iDigit=iNo%10;
        iCount++;
        
        iNo=iNo/10;
        return iCount;
     }
    public void revesrseNums() {
        int iDig=0;
        int isize=CountSize();
        int iCnt=0;
        for(iCnt=0;iCnt<isize;iCnt++)
        {
            iDig=iNo%10;
            System.out.println(iDig);
            iNo=iNo/10;
        }
    }

}

class Reverse
{

    public static void main(String args[])
    {
          Program1 p=new Program1();
           p.revesrseNums();
    }

}