#include<stdio.h>

int main(void) {
    int c;
    void bit_disp(int);

    while(1) {
        printf("decimal => ");
        scanf("%d", &c);
        bit_disp(c);
        if (c == 0) break;
    }
}

void bit_disp(int c) {
    int i, wc;

    for (i = 15; i >= 0; i--) {
        wc = (c >> i)&0x01;
        printf("%1d", wc);
    }

    printf("\n");
}
