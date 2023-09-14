#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <stdio.h>
#include <stdlib.h>


char *read_file(char *file);
int write_file(char *text, char *file);
char *encryption(char *text, int shift);
char *decryption(char *text, int reverse);

#endif
