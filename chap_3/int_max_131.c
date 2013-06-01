#include<stdio.h>

int main(void) {
    int a, b, int_max(int, int);

    while(1) {
        printf("data in a, b ? \n");
        scanf("%d, %d", &a, &b);
        printf("Max data --> %d\n\n", int_max(a, b));
    }

    return 0;
}

int int_max(int x, int y) {
    return x < y ? y : x;
}
