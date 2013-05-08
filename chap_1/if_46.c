#include<stdio.h>

int main()
{
    int a, b;

    while(1) {
        printf("\ndata on a, b ? \n");
        scanf("%d, %d", &a, &b);

        if(a < b) printf("... a < b !\n");
        else if(a == b) printf("... a == b !\n");
        else printf("... a > b !\n");
    }

    return 0;
}
