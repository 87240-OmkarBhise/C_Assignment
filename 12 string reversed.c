#include <stdio.h>
#include <string.h>

void reverseString(char *);

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char *str) {

    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}