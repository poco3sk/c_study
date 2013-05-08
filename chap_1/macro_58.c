#include<stdio.h>
#define max(x, y) (x < y ? y : x)

int main()
{
    int a, b;

    while(1) {
        printf("data in a, b ?\n");
        scanf("%d, %d", &a, &b);
        printf("Max --> %d\n", max(a, b));
    }

    return 0;
}
