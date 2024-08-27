#include<stdio.h>



int main() {
    
    int num;
    
    printf("Enter a Number: ");
    scanf("%d", &num);

    long long int fact = 1;

    for(int i = num; i > 0; i--){
        fact *= i; 
    }

    printf("Factorial of %d is: %lld", num, fact);

    return 0;
}