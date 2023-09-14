#include <stdio.h>


int isInvalid(int len_arg, char **opt) {
    int i;

    if ((len_arg < 3) || (len_arg > 4))
        printf("1st test\n"); return (1);

    if (opt[1] != "encrypt")
    {
        printf("2nd test\n");
        return (1);
    }

    if (len_arg == 4)
    {
        if (((int)(*opt[3]) > 20))
        {
            printf("3rd test\n");
            return (1);
        }
    }
}

int main(int argc, char *argv[]) {
    
    /*
    char *encrypt = encryption(text, 5);
    write_file(encrypt, "main.py");
    printf("%s\n", encrypt);
    

    
    char *decrypt = decryption(text, 5);
    write_file(decrypt, "main.py");
    printf("%s\n", decrypt);
    */

    int len_arg;

    len_arg = 0;
    while (argv[len_arg]) {
        len_arg += 1;
    }

    // if number of arguments is equal to 1
    // which means no argument is specified
    if (isInvalid(argc, argv)) {
        printf(
                "You'll need to specify the file to encrypt.\n"
                "Format is || cypher mode: encrypt/decrypt filename key: int < 20 - optional\n"
        );
        return (0);
    }

    // if num of args is equal to 2
    else {
        printf("Success recorded\n");
        return (0);
    }
}

