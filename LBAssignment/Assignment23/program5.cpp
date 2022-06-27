#include<iostream>

using namespace std;


void DisplayAsciVal(char ch)
{
    printf("Decimal Value : %d",ch);
    printf("\n Octal value is : %o",ch);
    printf("\n HexaDecimal value is : oX%x",ch);

}

int main()
{

    char ch='\0';

    cout<<"Enter String: "<<endl;
    scanf("%c",&ch);

    
    DisplayAsciVal(ch);

    return 0;
}