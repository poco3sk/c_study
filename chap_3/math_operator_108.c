#include<stdio.h>

int main()
{
    int ia, ib;
    float fa, fb;
    char ca, cb;

    ia = 5 / 3;
    ib = 5 % 3;

    fa = 5 / 3;
    fb = 5 / 3.0;

    ca = '@' + 1;
    cb = 'G' - 1;

    printf("int     ia, ib --> %d, %d\n", ia, ib);
    printf("float   fa, fb --> %f, %f\n", fa, fb);
    printf("char    ca, cb --> %c, %c\n", ca, cb);
}
