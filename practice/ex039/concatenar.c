#include <stdio.h>
#include <strings.h>

int main(void) {
    char str[60] = "Course";
    char str1[30] = "Course";
    char str2[18] = " of Progamming";

    strcat(str, " of C");
    //concatena the string " of C" with the content of the str

    strncat(str1, str2, 12);

    printf("str = %s\n", str);
    //it'll be showing "Course of C"

    printf("str1 = %s\n", str1);
    return 0;
}
