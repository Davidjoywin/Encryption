#include <stdio.h>

int main(int argc, char *argv[]) {
    int c;

    c = typeof(c);
    printf("%d\n", c);

    return (0);
}
