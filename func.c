#include<stdio.h>

int main() {
    int n;
    printf("Enter a number (n>2) = ");
    scanf("%d", n);
    int fib[n];
    fib[1] = 1;
    fib[0] = 0;

    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");

    return 0;

}