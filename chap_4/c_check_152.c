#include<stdio.h>

int main(void) {
    char str[80], ctbl[32];
    int i, n;
    void c_check(char *, char [], int *);

    while(1) {
        printf("String ? ");
        scanf("%s", str);
        n = 0;
        c_check(str, ctbl, &n);
        for (i = 0; i < n; i++) printf("[%c] ", ctbl[i]);
        printf("\n\n");
    }

    return 0;
}

void c_check(char *s, char t[], int *n) {
    int i;

    while(*s) {
        for (i = 0; i < *n; i++) if (*s == t[i]) break;
        if (i >= *n) {
            t[i] = *s;
            (*n)++;
        }

        s++;
    }
}
