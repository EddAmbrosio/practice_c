#include <stdio.h>
#include <stdlib.h>

        /*
             memory dynamic alocating with the malloc function
            return a pointer to the region whose the memory was alocated. 
            it alocates byte by byte
        
        */
int main(void) {
        int* x;

        x = malloc(sizeof(int));

        if (x) {
            printf("Memory alocated with succesfull\n");
            printf("x: %i\n", *x);
            *x = 50;
            printf("x: %i\n", *x);
        }  
        else
            printf("ERROR at trying to alocate the memory.");
        
    return 0;
}