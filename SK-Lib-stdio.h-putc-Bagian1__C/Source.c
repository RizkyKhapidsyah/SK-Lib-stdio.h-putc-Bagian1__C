#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    char c;

    pFile = fopen("alphabet.txt", "wt");

    for (c = 'A'; c <= 'Z'; c++) {
        putc(c, pFile);
    }
    
    fclose(pFile);

    _getch();
    return 0;
}