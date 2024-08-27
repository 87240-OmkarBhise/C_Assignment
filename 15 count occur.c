#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void countOccurrences(const char *);

int main() {
    char str[1000]; 

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    countOccurrences(str);

    return 0;
}

void countOccurrences(const char *str) {

    int counts[26] = {0}; 

     
    while (*str) {

        char ch = toupper(*str); 

        if (isalpha(ch)) { 
            counts[ch - 'A']++; 
        }

        str++;
    }

    printf("Output:\n");
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c : %d\n", 'A' + i, counts[i]);
        }
    }
}