#include <stdio.h>
#include <string.h>

int main(void) 
{
    char addr1[] = "Computer Science Department";
    char addr2[] = "University College London";
    char addr3[] = "Gower Street";
    char addr4[] = "London";
    char addr5[] = "WC1E 6BT";
    //an initialisation and declaration of an array, the no. in the square brackets is the length of the array.
    
    char* full_address[5] = {"Computer Science Department", "University College London", "Gower Street", "London", "WC1E 6BT"};
    
    //the asterisk is a pointer
    
    for (int i = 0; i < sizeof(full_address)/sizeof(full_address[0]); i++)//the sizeof function gives the length of array in bytes
    {
        printf("%s\n", full_address[i]);
    }
    
    for (int j = 0; j < sizeof(full_address)/sizeof(full_address[0]); j++)
    {
        int index = strlen(full_address[j]) - 1;
        while (index > - 1)
        {
            char* string = full_address[j];
            printf("%c", string[index]);
            index--;
        }
        printf("\n");
    }
    return 0; 
}