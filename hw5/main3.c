#include <stdio.h>

int main()
{
    int x = 1, y = 1;
    for(int i = 1 ; ; i++){
        x = i;
        if(i == 10 ){
            printf("\n");
            i = 0;
            y += 1;
        }
        else if(x*y == 81){
            printf("%d * %d = %d\t", x, y, x*y);
            break;
        }
        else{
            printf("%d * %d = %d\t", x, y, x*y);
        }
    }

    return 0;
}
