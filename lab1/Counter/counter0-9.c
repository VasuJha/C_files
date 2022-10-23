#include <stdio.h>

int main(void) {
    int counter = 0;
    while (counter < 10) {
        printf("%d\n", counter);//while loop, instead of %d, %i could also be used
        counter = counter + 1;
    }
    return 0;
}