#include <stdio.h>
#include <stdlib.h>

        /*
             memory dynamic alocating with the malloc function
            return a pointer to the region whose the memory was alocated or NULL. 
            it alocates byte by byte
        
        */
int main(void) {
        char* x;

        //x = malloc(sizeof(int)); have a parameter
        x = calloc(1, sizeof(char)); //callo(how many elements, size of the element)//have two parameters

        if (x) {
            printf("Memory alocated with succesfull\n");
            printf("x: %c\n", *x);
            *x = 'H';
            printf("x: %c\n", *x);
        }  
        else
            printf("ERROR at trying to alocate the memory.");
        
    return 0;
}