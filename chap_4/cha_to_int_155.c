#include<stdio.h>

int main(void) {
    int cha_to_int(char *);
    char *c;

    while(1) {
        printf("input --> ");
        scanf("%s", c);
        printf("cha_to_int --> %d", cha_to_int(c));
        printf("\n");
    }
    return 0;
}

int cha_to_int(char *s) {
    int w, t = 0;

    while(*s) {
        if (*s < '0' || '9' < *s) w = 0;
        else w = *s - '0';
        t = t * 10 + w;
        s++;
    }

    return t;
}
