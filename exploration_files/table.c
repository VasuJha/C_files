#include <stdio.h>

//a table

int main(void) {

    printf("n\tn2\tn3 \n");
    for (int n = 1 ; n < 10 ; n++)
    {
        printf("%i\t%i\t%i\n", n, n * n, n * n * n);
    }
    return 0;
}