#include<stdio.h>

int main()
{
    int a, b;

    printf("Compare a, b ? ");
    scanf("%d, %d", &a, &b);

    printf("\n");
    printf("a < b  --> %d\n", a < b);
    printf("a > b  --> %d\n", a > b);
    printf("a <= b --> %d\n", a <= b);
    printf("a >= b --> %d\n", a >= b);
    printf("a == b --> %d\n", a == b);
    printf("a != b --> %d\n", a != b);
    printf("\n");
    printf("a && b --> %d\n", a && b);
    printf("a || b --> %d\n", a || b);
    printf("!a     --> %d\n", !a);
}
