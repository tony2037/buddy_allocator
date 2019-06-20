#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    printf("Allocate 64\n");
    void *a = malloc(64);

    printf("Allocate 100\n");
    a = malloc(100);

    printf("Allocate 10000\n");
    a = malloc(10000);
}
