#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {

    int num = atoi(argv[1]);

    printf("Multiplication table for %d:\n", num);

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", num * i);
    }

    return 0;
}
