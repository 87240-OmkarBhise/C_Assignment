#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ROLLNO_LENGTH 20

typedef struct {
    char studentName[MAX_NAME_LENGTH];
    char rollNo[MAX_ROLLNO_LENGTH];
    float totalMarks;
} Student;

void readStudentData(Student *s) {
    printf("Enter student name: ");
    fgets(s->studentName, MAX_NAME_LENGTH, stdin);
    
    size_t length = strlen(s->studentName);
    if (length > 0 && s->studentName[length - 1] == '\n') {
        s->studentName[length - 1] = '\0';
    }

    printf("Enter roll number: ");
    fgets(s->rollNo, MAX_ROLLNO_LENGTH, stdin);

    length = strlen(s->rollNo);
    if (length > 0 && s->rollNo[length - 1] == '\n') {
        s->rollNo[length - 1] = '\0';
    }

    printf("Enter total marks: ");
    scanf("%f", &s->totalMarks);
    
    while (getchar() != '\n');
}


void displayStudentData(const Student *s) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s->studentName);
    printf("Roll Number: %s\n", s->rollNo);
    printf("Total Marks: %.2f\n", s->totalMarks);
}

int main() {
    Student student;

    readStudentData(&student);

    displayStudentData(&student);

    return 0;
}
