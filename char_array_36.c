#include<stdio.h>
#include<string.h>

char bstr[10]   = { 'B', ' ', 'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0' },
     cstr[10]   = "C program",
     dstr[]     = "D Program";

int main()
{
    printf("bstr --> %s, strlen -->  %zd\n", bstr, strlen(bstr));
    printf("cstr --> %s, strlen -->  %zd\n", cstr, strlen(cstr));
    printf("dstr --> %s, strlen -->  %zd\n", dstr, strlen(dstr));

    return 0;
}
