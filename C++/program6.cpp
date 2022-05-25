//Input=4
//output= 4*3*2*1 =24 


#include<iostream>

using namespace std;


class Number
{
    private:
    int iNo;//characterstics of class

//below code is behaviour of class

    public:
        void Accept()//setter
        {
            cout<<"Enter the Value :"<<endl;
            cin>>this->iNo;
        }

        void Display()//getter
        {
            cout<<"Value is :"<<this->iNo<<endl;
        }

        int Factorial()
        {
            int iCnt=0;
            int iFact=1;
            for(iCnt=1;iCnt<=iNo;iCnt++)
            {
                iFact*=iCnt;//iFact=iFact*iCnt;//short hand expression
            }
            return iFact;
        }
};

int main()
{
    Number nobj;

    int iRet=0;
    
    //cout<<nobj.iNo  //Error due to iNo is private
    nobj.Accept();
    nobj.Display();

    iRet=nobj.Factorial();

    cout<<"Factorial is "<<iRet<<endl;
    return 0;
}
