#include<stdio.h>
int main()
{
    int i, j, add(int);
    add(10);
    add(10);
    add(10);

    return 0;
}

int add(int seed)
{
    static int static_value = 0;
    int local_value         = 0;

    static_value    += seed;
    local_value     += seed;

    printf(
        "add(%2d) static --> %3d, auto --> %3d\n",
        seed, static_value, local_value
    );

    return 0;
}
