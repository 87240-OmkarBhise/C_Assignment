#include <stdio.h>


void printBinary(int);
void convertToOctal(int);
void convertToHexadecimal(int);

int main() {

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);

    printBinary(num);

    printf("Octal equivalent: ");
    if (num == 0) {
        printf("0");
    } 
    else {
        convertToOctal(num);
    }
    printf("\n");


    printf("Hexadecimal equivalent: ");
    if (num == 0) {
        printf("0");
    } 
    else {
        convertToHexadecimal(num);
    }
    printf("\n");

    return 0;
}

void printBinary(int num) {
    
    if (num == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    int highestBit = 1 << (sizeof(num) * 8 - 1);
    
    printf("Binary equivalent: ");

    int printed = 0; 

    for (int i = highestBit; i > 0; i >>= 1) {
        if (num & i) {
            printf("1");
            printed = 1;
        } 
        else if (printed) {
            printf("0");
        }
    }
    printf("\n");
}

void convertToOctal(int num) {

    if (num == 0) {
        return;
    }

    convertToOctal(num / 8);

    printf("%d", num % 8);
}


void convertToHexadecimal(int num) {

    if (num == 0) {
        return;
    }

    convertToHexadecimal(num / 16);

    int remainder = num % 16;

    if (remainder < 10) {
        printf("%d", remainder);
    } 
    else {
        printf("%c", 'A' + (remainder - 10));
    }
}