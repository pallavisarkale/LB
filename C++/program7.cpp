

#include<iostream>
using namespace std;

class program7
{
    private:
    int iLength=0;
    int *ptr;
        
    public:
    program7()
    {

    }
    program7(int iValue)
    {
        this->iLength=iValue;
        ptr=new int[iLength];//memory allocation
    }
    ~program7()
    {
        delete []ptr;//Dealloacte memory
    }

    void Accept()
    {
        int iCnt=0;

        cout<<"Enter How Many Elements"<<endl;
        cin>>this->iLength;

        cout<<"Enter Elements in Array\n"<<endl;
        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            cin>>this->ptr[iCnt];
        }
    }

    void Display()
    {
        int iCnt=0;

        cout<<"Elements in Array are \n"<<endl;
        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            cout<<ptr[iCnt]<<endl;
        }
    }

    int Summation()
    {
        int iSum=0;
        int iCnt=0;
        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            iSum+=ptr[iCnt];
        }
        return iSum;
    }
};

int main()
{
    program7 pobj;
    int iRet=0;

    pobj.Accept();
    pobj.Display();

    iRet=pobj.Summation();

    cout<<"Summation is : "<<iRet<<endl;


    return 0;
}