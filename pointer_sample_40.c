#include<stdio.h>

static char astr[] = "ABCDEFG";

int main()
{
    char bstr[10], cstr[10];
    void data_copy(char[], char[]), pointer_copy(char *, char *);

    data_copy(astr, bstr);
    pointer_copy(astr, cstr);
    printf("astr --> %s\nbstr --> %s\ncstr --> %s\n", astr, bstr, cstr);

    return 0;
}

void data_copy(char from[], char to[])
{
    int i = 0;

    while(from[i] != '\0') {
        to[i] = from[i];
        i++;
    }

    to[i] = '\0';
}

void pointer_copy(char *from, char *to)
{
    while(*from != '\0') {
        *to = *from;
        from++;
        to++;
    }

    *to = '\0';
}

