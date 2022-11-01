#include <stdio.h>

//adding all the numbers in an array

int main(void) {
    int anArray[] = {4, 6, 2, -1, 6, 8, 12, -4};
    int n, sum = 0;
    for (n = 0 ; n < sizeof(anArray) / sizeof(anArray[0]) ; n++)
    {
        sum += anArray[n];
    }
    printf("The sum is: %i\n", sum);
    return 0;
}