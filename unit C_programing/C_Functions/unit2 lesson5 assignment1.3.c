/*
 ============================================================================
 Name        : 3.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(char *sentence) {
  char y[100];
  int n ;
  n= strlen(*sentence);
  for (int i = 0; i < n; i++) {
    y[i] = sentence[n - i - 1];
  }
  printf("%s", y);
}

int main(void) {
  char text[100];

  printf("Enter a sentence: ");
  fflush(stdout);
  fgets(text, sizeof(text), stdin);

  reverse(text);

  return EXIT_SUCCESS;
}
