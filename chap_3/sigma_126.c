#include<stdio.h>

int main(void) {
    int tbl[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sigma_1(int[]);
    int sigma_2(int*);

    unsigned char a[] = "ABCDEFG";
    unsigned char z[] = "HIJKLMN";
    unsigned char *sadd(unsigned char*, unsigned char*);

    printf("%d\n", sigma_1(tbl));
    printf("%d\n", sigma_2(tbl));

    printf("%s\n", sadd(a, z));

    return 0;
}

int sigma_1(int tbl[]) {
    int t = 0, i = 20;
    while(i) t += tbl[--i];
    return t;
}

int sigma_2(int *tbl) {
    int t = 0, i = 20;
    while(i--) t += *tbl++;
    return t;
}

unsigned char *sadd(unsigned char *s, unsigned char *t) {
    unsigned char *pp;
    pp = s;
    while(*s++);
    for (--s; *s++ = *t++;);
    return pp;
}
