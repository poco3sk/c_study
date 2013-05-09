#include<stdio.h>
#include<string.h>

typedef unsigned char BYTE;
typedef struct {
    unsigned int mcode;
} MOJI;

int main()
{
    BYTE kanji[7], kanji_char[3];
    MOJI data[10];
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("カンジ ? ");
        gets(kanji);

        if(kanji[0] == '\0') break;
        data[i].mcode = kanji[0] << 16 | kanji[1] << 8 | kanji[2];
    }

    for(j = 0; j < i; j++) {
        kanji_char[0] = data[j].mcode >> 16;
        kanji_char[1] = data[j].mcode >> 8;
        kanji_char[2] = data[j].mcode & 0xFF;
        printf(
            "%2d : %c%c%c\n",
            j, kanji_char[0], kanji_char[1], kanji_char[2]
        );
    }

    return 0;
}
