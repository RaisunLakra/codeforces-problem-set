#include <stdio.h>

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int n, t;
  scanf("%d%d", &n, &t);
  char childrens[n + 1]; // Use a char array to handle characters

  // Reading the children's queue
  scanf("%s", childrens); // Read the string directly without the & operator

  // Solution: Rearranging the queue
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (childrens[j] == 'B' && childrens[j + 1] == 'G') {
        swap(&childrens[j], &childrens[j + 1]);
        j++; // Move to the next pair to avoid multiple swaps in one iteration
      }
    }
  }

  // Print the final result
  printf("%s\n", childrens);
  
  return 0;
}

