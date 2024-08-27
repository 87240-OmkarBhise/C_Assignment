#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *);

int main() {
    
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if(length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    if(isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } 
    else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(const char *str) {

    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
    
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;
        }

        start++;
        end--;
    }

    return 1; 
}
