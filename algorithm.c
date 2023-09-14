#include "encrypt.h"


char *encryption(char *text, int shift) {
    int i;

    for (i = 0; text[i] != '\0'; i++)
        text[i] = text[i] + shift;

    return (text);
}

char *decryption(char *text, int reverse) {
    int i;

    for (i = 0; text[i] != '\0'; i++)
        text[i] = text[i] - reverse;

    return (text);
}

