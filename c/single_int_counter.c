/*
  given an string count and display the number of 0 - 9 integers in it
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_LENGTH 10

void add(char c, int* num) {
  int j = c-48;
  if (j >= 0 && j < 10) ++num[j];
}

int main() {
  int* num;

  if ((num = malloc(sizeof(int) * NUM_LENGTH)) == NULL) {
    fprintf(stderr, "Failed to allocate %d byte(s)\n", NUM_LENGTH);
    exit(EXIT_FAILURE);
  }
  
  char c;
  printf("Enter string: ");
  while((c = getchar()) != '\n') add(c, num);

  for (int i = 0; i < 10; i++) {
    printf("%d\t", num[i]);
  }

  free(num);
  return 0;
}
