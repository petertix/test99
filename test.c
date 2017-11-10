#include <stdio.h>
#include <string.h>


int main() {

    char *str[256];

    strcpy(str, "This is a test");

    printf("\n%s    Size= %lu\n", str, sizeof(str));

    return 0;
}

