#include <stdio.h>

int main() {
    int i = 12345;
    int thousands = (i / 1000) % 10;
    int ones = i % 10;
    int result = i - thousands * 1000 - ones + ones * 1000 + thousands;
    printf("%d\n", result);
    return 0;
}
