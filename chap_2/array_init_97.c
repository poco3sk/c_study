#include<stdio.h>

int table[5]    = {0, 1, 2, 3, 4},
    tdata[]     = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

char    str_upper[]     = "C PROGRAM STRING !!",
        str_lower[25]   = "c program string !!";

int main()
{
    int i = 0;

    for(i = 0; i < 5; i++) printf("%d ", table[i]);
    printf("\n");

    i = 0;
    while(1) {
        printf("%d ", tdata[i]);
        if(tdata[i] == 9) break;
        i++;
    }
    printf("\n");

    printf("%s\n", str_upper);
    printf("%s\n", str_lower);

    return 0;
}

