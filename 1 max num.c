#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num;

    int max_num = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {

        num = atoi(argv[i]);

        if (max_num < num) {
            max_num = num;
        }
    }

    printf("Largest number is %d\n", max_num);

    return 0;
}
