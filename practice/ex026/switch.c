#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int i = 0;
    printf("Type a number betweem 0 and 9: ");
    scanf("%i", &i);
    switch(i) {
        case 0:
            printf("The option typed was 0");
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("You typed a number betweem 0 and 6");
            break;
        case 6:
            printf("The option typed was 6");
            break;
        case 7:
            printf("The option typed was 7");
            break;
        case 8:
            printf("The option typed was 8");
            break;
        case 9:
            printf("The option typed was 9");
            break;
        default: 
        printf("Option default!");
    }
    return 0;
}