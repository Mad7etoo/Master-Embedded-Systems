/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float r;
   printf ("Enter the radius: ");
   fflush (stdout);
   fflush(stdin);
   scanf("%f",&r);
   printf("Area=%0.2f",r*r*3.14);
	return EXIT_SUCCESS;
}
