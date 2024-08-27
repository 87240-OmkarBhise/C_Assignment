#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    int upperCount = 0;
    int lowerCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    printf("Enter characters (press Enter to finish input): ");

    while ((ch = getchar()) != '\n') {
        if (isupper(ch)) {
            upperCount++;
        } else if (islower(ch)) {
            lowerCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            otherCount++;
        }
    }

    printf("\nCharacter Analysis:\n");
    printf("Uppercase letters: %d\n", upperCount);
    printf("Lowercase letters: %d\n", lowerCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Other characters: %d\n", otherCount);

    return 0;
}
