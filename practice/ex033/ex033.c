#include <stdio.h>

int main(void) {
    int vect[10] = {0001};
    int vect2[10] = {0};
    for(int b = 0; b < 11; b++) {
        printf("Type a value: ");
        scanf("%i", &vect[b]);
    }
    for(int b = 0; b < 4; b++) {
        for(int p = 0; p != b; p++) {
            if(vect[b] == vect[p]) {
                vect2[p] = vect[b];
            }
        } 
    }

    for(int x = 0; x < 10; x++) {
        if(vect2[x] =! 0001) {
            printf("The followed numbers went added more that once: %i\n", vect2[x]);
        }
    }
    return 0;
}