#include<stdio.h>

static char astr[] = "ABCDEFGH";

int main()
{
    int i, j, k;

    k = 3;
    j = ++k;
    printf("j, k --> %d, %d\n", j, k);

    k = 3;
    j = k++;
    printf("j, k --> %d, %d\n", j, k);

    printf("\n");
    for(i = 0; astr[i] != 0; i++)
        printf("[%2d] --> %c\n", i, astr[i]);

    return 0;
}
