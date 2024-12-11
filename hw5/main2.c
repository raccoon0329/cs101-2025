#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 4.0f ;
    int sign = -1;
    for(int i = 1 ; ; i++){
        pi += sign * 4.0 / (2 * i + 1);
        sign = -sign;
        if(round(pi*100000)/100000 == 3.14159){
            printf("i = %i\n",i);
            printf("x = %i\n",2 * i + 1);
            break;
        }
    }
    printf("%.5f\n",pi);
    
    return 0;
}
