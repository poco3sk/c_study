#include<stdio.h>

int main(void) {
    int i, j;
    long l;

    printf("HEX");

    for (i = 0; i < 16; i++) printf("%4X", i);
    printf("%6s%6s\n\n", "00", "000");

    for (i = 0; i < 16; i++) {
        l = (long)i;
        printf("%3X", i);
        for (j = 0; j < 16; j++) printf("%4d",  j + ( i << 4));
        printf("%6ld%6ld\n\n", l << 8, l << 12);
    }

    return 0;
}
