#include<stdio.h>

int main(void) {
    unsigned int a = -1;
    void hex_print(int);

    hex_print(a);

    a = a << 4;
    hex_print(a);

    a = a >> 4;
    hex_print(a);

    return 0;
}

void hex_print(int x) {
    printf("(%10d) --> %08X\n", x, x);
}
