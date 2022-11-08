#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void lowerCase(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0';
}

void upperCase(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0'; //indica the end of the string, without it, the print function will print some 'trash'.
}
int main(void) {
    char str1[] = "Good evening, my love!";
    char str2[50];

    printf("%s\n", str1);

    upperCase(str1, str2);
    printf("%s\n", str2);

    lowerCase(str1, str2);
    printf("%s\n", str2);

    return 0;
}