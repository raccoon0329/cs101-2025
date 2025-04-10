#include <stdio.h>

void printRow(int i, int j) {
    if (j > 9) return;
    printf("%d * %d = %2d\t", i, j, i * j);
    printRow(i, j + 1);
}

void printTable(int i) {
    if (i > 9) return;
    printRow(i, 1);
    printf("\n");
    printTable(i + 1);
}

int main() {
    printTable(1);
    return 0;
}
