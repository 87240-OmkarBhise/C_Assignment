#include<stdio.h>

int main() {
    int sub[5], sum = 0;

    printf("Enter marks of 5 subjects: ");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &sub[i]);
    }

    for(int i = 0; i < 5; i++) {
        sum += sub[i];
    }

    if(sum < 60) {
        printf("Your Grade is: F");
    }
    else if(sum >= 60 && sum < 70) {
        printf("Your Grade is: C");
    }
    else if(sum >= 70 && sum < 80) {
        printf("Your Grade is: B");
    }
    else if(sum >= 80 && sum < 90) {
        printf("Your Grade is: A");
    }
    else if(sum >= 90) {
        printf("Your Grade is: Ex");
    }

    return 0;
}