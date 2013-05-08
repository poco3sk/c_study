#include<stdio.h>
#define WHIT_C 0

int main()
{
    printf("-------------------------------------\n");

#if WHIT_C
    putfmt(" Whitesmith_C Compile !!\n");
#else
    printf(" Microsoft_C, Turbo_C,\n");
    printf(" Power_C, etc Compile !!\n");
#endif

    printf("-------------------------------------\n");
}
