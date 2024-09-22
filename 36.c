#include <stdio.h>

int main() {
  int i, j, s;
  for (i = 1; i <=4; i++) {
    for (s =4- i; s >= 1; s--) {
      printf(" ");
    }
    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
