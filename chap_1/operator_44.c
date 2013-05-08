#include<stdio.h>

int main()
{
    int a, b, c, d, e;

    a = b = c = d = 0;
    a++;
    b--;
    c += 123;
    e = d == 0;

    printf(
        "a --> %d\nb --> %d\nc --> %d\nd --> %d\ne --> %d\n",
        a, b, c, d, e
    );

    return 0;
}
