#include <stdio.h>

int main() {
    for (int i = 1; i <= 81; i++) {
        int x = (i - 1) / 9 + 1;
        int y = (i - 1) % 9 + 1;
        printf("%d*%d=%-2d\t", x, y, x * y);
        if (y == 9) printf("\n");
    }
    return 0;
}
