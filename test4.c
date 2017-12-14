#include <stdio.h>
#include <string.h>


int main() {

    char *str[256];
    char str2[256];

    strcpy(str, "This is a test");
    strncpy(str2, "This is a test", sizeof("This is a test"));

    printf("\n%s    Size= %lu\n", str, sizeof(str));
    printf("\n%s    Size= %lu\n", str2, sizeof(str));

    return 0;
}

