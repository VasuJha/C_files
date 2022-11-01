#include <stdio.h>

//a basic example of the sizeof operator-gives size in bytes

int main(void) {
    int bytes = sizeof(double);//int is 4 bytes, double is 8 bytes, long int is 8 bytes, short is 2 bytes, char is 1 byte
    printf("The size is %i bytes\n", bytes);
    return 0;
}