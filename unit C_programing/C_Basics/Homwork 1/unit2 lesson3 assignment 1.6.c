/*
 ============================================================================
 Name        : 6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  float x ,y,z;
	  printf ("Enter value of x:");
	 fflush(stdin); fflush(stdout);
	  scanf("%f",&x);
	  printf ("Enter value of y:");
	 fflush(stdin); fflush(stdout);
	  scanf("%f",&y);
	  z=x;
	  x=y;
	  y=z;
	  printf("After swapping, value of x = %f \n",x);
	  printf("After swapping, value of y = %f \n",y);
	return EXIT_SUCCESS;
}
