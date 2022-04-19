//Additon
package LB.JavaProgram;
 
public class AddFunction{
    public static int Add(int iValue1,int iValue2)
    {
        if(iValue1<0)
        {
            iValue1=-iValue1;
        }
        if(iValue2<0)
        {
            iValue2=-iValue2;
        }
        int iAns=iValue1+iValue2;
        return iAns;
    }
}
