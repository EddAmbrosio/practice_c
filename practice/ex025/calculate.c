#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main() {
    float num1 = 0;
    float num2 = 0;
    float result = 0;
    char op = '0';

    do {
        printf("\n (0) Exit the program.\n");
        printf("\n (1) Plus\n");
        printf("\n (2) Subtration\n");
        printf("\n (3) Multiplication\n");
        printf("\n (4) Dividir\n");

        printf("\nInform the operation: \n");
        printf("\t\t\t");
        op = getche();
        printf("\n");
        
        if (op != '0') {
            printf("\nType the first number: \n\t");
            scanf("%f", &num1);
            printf("\nType the second number: \n\t");
            scanf("%f", &num2);
            
            if (op == '1' ) {
                result = num1 + num2;
                printf("\nThe plus of the numbers is: %f\n", result);  
            }
            if (op == '2' ) {
                result = num1 - num2;
                printf("\nThe subtration of the numbers is: %f\n",result);  
            }
            if (op == '3' ) {
                result = num1 * num2;
                printf("\nThe multiplication of the numbers is: %f\n",result);   
            }
            if (op == '4' ) {
                result = num1/num2;
                printf("\nThe divisation of the numbers is: %f\n",result);     
            }
            }
            printf("\nPress a key to realize a new calcule.\n");
            getch();
            //system("pause");
            system("cls");
    } while (op !='0');

}