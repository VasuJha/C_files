// Written by Vasu Jha 11/10/2022
//This program displays my name

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char myName[] = "Vasu Jha";
    printf("Hello, my name is %s\n", myName);

    int index = strlen(myName) - 1;
    while (index > -1)
    {
        printf("%c", myName[index]);
        index = index - 1;
    }
    printf("\n");
    return 0;
}