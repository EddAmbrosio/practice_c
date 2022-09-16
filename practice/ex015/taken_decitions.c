#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 10;
    //printf("%i", i != 1 );
    //printf("%i", !(i == 1));
    /*! is equivalent to NOT */
    printf("Type a number != of 5: \n");
    scanf("%i", &i);

    if (i == 5) {
        printf("Type a different number!");
    } else {
        printf("All right!!");
    }
    return 0;
}