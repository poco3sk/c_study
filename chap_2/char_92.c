#include<stdio.h>

static char ys[10] = {
    '\n', '\t', '\f', '\\', '\b', '\'', '\r', '\0', '\177', '\101'
},
str[] = "<STRING>";

int main()
{
    // int i, void prints(char *); // --> compile error
    int i;
    void prints(char *);
    char xs = 0x41, xt = 'A';

    printf("xs --> %c\nxt --> %c\n", xs, xt);
    printf("\n");
    for(i = 0; i < 10; i++) printf("ys[%d] --> %02X\n", i, ys[i]);
    printf("\n");
    printf("%s\n", str);
    prints("C Program");

    return 0;
}

void prints(char *str)
{
    printf("str --> %s\n", str);
}
