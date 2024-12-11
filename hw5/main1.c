#include <stdio.h>

int main()
{
    int times = 7;
    for(int i = 1 ; i <= times ; i++){
        printf("%*d" ,times-i+1 ,i );
        for(int j = 1 ; j < i ; j++ ){
            printf(" %d" ,i );
        }
        printf("\n");
    }

    return 0;
}
