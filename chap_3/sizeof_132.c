#include<stdio.h>

struct kata {
    char cstr[20];
    int code;
    float rithu;
};

int main(void) {
    struct kata table[10];

    printf("int    size --> %zd\n", sizeof(int));
    printf("float  size --> %zd\n", sizeof(float));
    printf("double size --> %zd\n", sizeof(double));
    printf("s_kata size --> %zd\n", sizeof(struct kata));
    printf("table  size --> %zd\n", sizeof(table));

    return 0;
}
