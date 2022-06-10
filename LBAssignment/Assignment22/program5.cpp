#include<iostream>

using namespace std;


void checkExamTime(char ch)
{
    switch (ch)
    {
    case 'A':
        printf("Your exam time is : 7 Am");
        break;

    case 'B':
        printf("Your exam time is : 8.30 Am");
        break;    
    
    case 'C':
        printf("Your exam time is : 9.30 Am");
        break;

    case 'D':
        printf("Your exam time is : 11 Am");
        break;    

    default:
        printf("Invalid");
        break;
    }
    
}

int main()
{

    char ch='\0';

    cout<<"Enter String: "<<endl;
    scanf("%c",&ch);

    if (ch>='A' && ch<='D')
    {
        checkExamTime(ch);

    }
    else{
        printf("Please Enter Division bet A to D");
    }
    
    return 0;
}