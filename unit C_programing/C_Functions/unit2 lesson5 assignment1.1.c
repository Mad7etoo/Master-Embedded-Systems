#include <stdio.h>
#include <stdlib.h>

int check_prime(int num) {
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int x, y;

  printf("Enter two numbers: ");
  fflush(stdout);
  scanf("%d %d", &x, &y);

  printf("Prime numbers between %d and %d are: ", x, y);
  for (int i = x + 1; i <= y; i++) {
    if (check_prime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return EXIT_SUCCESS;
}
