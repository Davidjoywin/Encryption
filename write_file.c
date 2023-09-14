#include "encrypt.h"


int write_file(char *text, char *file_name) {
    FILE *open_file = fopen(file_name, "w");
    
    if (open_file == NULL) {
        printf("File not opened\n");
        exit(0);
    }

    fputs(text, open_file);
    return (0);
}
