#include<stdio.h>

int main()
{
    int n, sleng(char *);
    char seed[50];

    while(1) {
        scanf("%s", seed);  // 配列名はアドレス
        n = sleng(seed);
        printf("length --> %d\n", n);
    }

    return 0;
}

int sleng(char *seed)
{
    int n = 0;
    while(*seed++) n++;

    return n;
}
