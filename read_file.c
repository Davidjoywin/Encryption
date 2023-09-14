#include "encrypt.h"


int no_char(char *file_name) {
    int count;
    FILE *file = fopen(file_name, "r");

    if (file == NULL) {
        printf("Failed to open file %s\n", file_name);
        exit(0);
    }

    count = 0;
    while (!feof(file)) {
        fgetc(file);
        count += 1;
    }
    fclose(file);

    return (count);
}

char *read_file(char *file) {
    int len_char, i;
    char *text;
    FILE *open_file = fopen(file, "r");

    if (open_file == NULL) {
        printf("Failed to open file %s\n", file);
        exit(0);
    }

    len_char = no_char(file);

    text = malloc(len_char);

    while (i != len_char) {
        if (fgetc(open_file) == EOF)
            break;


        text[i] = fgetc(open_file);
        i++;
    }

    printf("%s", text);

    fclose(open_file);
    return (text);
}

int main(void) {
    read_file("main.py");
    return (0);
}

