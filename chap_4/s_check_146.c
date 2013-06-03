#include<stdio.h>

char astr[] = "ABC#EFG#HIJ",
     bstr[] = "1234%5678%9";

int s_check(char [], int);

int main(void) {
    int a, b;
    int i0 = 0;
    int i5 = 5;

    a = s_check(astr, i0);
    b = s_check(bstr, i5);

    printf("[%s] %02d -> %d\n", astr, i0, a);
    printf("[%s] %02d -> %d\n", bstr, i5, b);

    return 0;
}

int s_check(char str[], int i) {
    int flag = -1;

    while(str[i] != 0) {
        if (str[i] == '#' || str[i] == '%') {
            flag = i;
            break;
        }

        i++;
    }

    return flag;
}

