#include<stdio.h>

int Fact(int n) {
    if (n>=1)
        return n*Fact(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, Fact(n));
    return 0;
}

