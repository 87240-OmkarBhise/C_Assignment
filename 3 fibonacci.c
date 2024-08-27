#include <stdio.h>

void fibo(int);


int main() {
    
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    fibo(n);

    return 0;
}

void fibo(int n) {

    long long int a = 0, b = 1, c;

    printf("Fibonacci Series up to %d numbers:\n", n);
    printf("%lld", a);
    
    if (n > 1) {
        printf(", %lld", b);
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(", %lld", c);
        a = b;
        b = c;
    }

    printf("\n");
}