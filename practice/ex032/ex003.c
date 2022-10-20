#include <stdio.h>

int main(void) {
  int n = 0;
  int equal = 0;
  printf("Please type the length of the vector: ");
  scanf("%i", &n);
  int vect[n];
  int equal1[n];

  printf("\nPlease type the variable that'll be stored in the vector:\n");
  for(int i = 0; i < n; i++) {
    printf("\n>>>");
    scanf("\n%i\n", &vect[i]);
  }

  for(int k = 0; k < n; k++) {
    for(int m = (n - 1); m >= 0 & m != k; m--) {
      if(vect[k] == vect[m]) {
        equal++;   
        equal1[k] = vect[k];
      }
    }
    }
    printf("\nWe have %i values and %i of them are the same.\n", n, equal);
    for(int b = 0; b < n; b++) {
      //if(equal1[b] != -2) {
          printf("The followed numbers went added more that once: %i\n", equal1[b]);
      //}
      
    }
  return 0;
}