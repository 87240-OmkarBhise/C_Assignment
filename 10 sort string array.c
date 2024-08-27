#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    
    char nameOfStudents[10][50];
    char *namePointers[10];
    int numStudents = 0;

    printf("Enter up to 10 student names (type 'done' to finish early):\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(nameOfStudents[i], sizeof(nameOfStudents[i]), stdin);
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0'; 

        if (strcmp(nameOfStudents[i], "done") == 0) {
            numStudents = i;
            break;
        }
        
        namePointers[i] = nameOfStudents[i];
        numStudents++;
    }

    qsort(namePointers, numStudents, sizeof(char *), compareNames);

    printf("\nSorted list of student names:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", namePointers[i]);
    }

    return 0;
}
