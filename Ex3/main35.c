#include <stdio.h>

int main() {
    char c = 'A';
    int *p = (int*)&c;

    printf("Value: %d\n", *p);

    return 0;
}
