#include<stdio.h>
#define LOOP while(1)
#define INPUT scanf
#define PRINT printf

int main()
{
    int a, b;

    LOOP {
        PRINT("\ndata in a, b ? \n");
        INPUT("%d, %d", &a, &b);

        if(a < b) PRINT("... a < b !\n");
        else if(a == b) PRINT("... a == b !\n");
        else PRINT("... a > b !\n");
    }

    return 0;
}
