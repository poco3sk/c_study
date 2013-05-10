#include<stdio.h>

int main(void)
{
    int wd, bd = 0x0f0f, cd = 0x4567;
    void bit_disp(int);

    printf(" 0x4567                             --> ");
    bit_disp(cd);

    printf(" 0x0f0f                             --> ");
    bit_disp(bd);

    wd = cd | bd;
    printf(" OR                                 --> ");
    bit_disp(wd);

    wd = cd & bd;
    printf(" AND                                --> ");
    bit_disp(wd);

    wd = cd ^ bd;
    printf(" XOR(0x4567 ^ 0x0f0f)               --> ");
    bit_disp(wd);

    wd = wd ^ bd;
    printf(" XOR((0x4567 ^ 0x0f0f) ^ 0x0f0f)    --> ");
    bit_disp(wd);

    return 0;
}

void bit_disp(int c)
{
    int i, wc;

    for(i = 15; i >= 0; i--) {
        wc = (c >> i) & 0x01;
        printf("%1d", wc);
    }

    printf("\n");
}

