#include<iostream>

using namespace std;


void DisplayASCII()
{
        int i;  
    // use for loop to print the capital letter from A to Z  
    for ( i = 0; i <=255; i++)  
    {  
        printf (" \n The ASCII value of %c is %d ", i, i);  
    }     
}

int main()  
{  
    // declare local variable  
    DisplayASCII();
    return 0;  
}  