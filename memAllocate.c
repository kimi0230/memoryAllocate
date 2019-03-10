#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char *str;
    int i;

    if (argc == 2) {
        sscanf(argv[1], "%d", &i);
        printf("Allocating %d Bytes for 60 seconds...\n", i);
        str = (char *)malloc(i);
        memset(str, 1, i);
        sleep(60);
        free(str);
        printf("free %d Bytes\n", i);
    } else {
        printf(
            "This program needs exactly 1 argument.RAM to allocate with "
            "integer.\n");
    }
    return 0;
}