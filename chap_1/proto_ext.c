#include<stdio.h>

int main()
{
    int i, j;
    char c;

    int int_func1(void);    // なくても動作はする
    int int_func2(int);     // なくても動作はする
    char char_func(void);   // ないとCompile Error

    i = int_func1();
    j = int_func2(2);
    c = char_func();

    printf("i --> %d\n", i);
    printf("j --> %d\n", j);
    printf("c --> %c\n", c);
}

int int_func1()
{
    return 2;
}

int int_func2(int i)
{
    return i * 2;
}

char char_func()
{
    return 'A';
}
