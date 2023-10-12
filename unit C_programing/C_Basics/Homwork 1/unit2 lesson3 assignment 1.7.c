/*
 ============================================================================
 Name        : 7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x ,y;
	printf ("Enter value of x:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf ("Enter value of y:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	x=x+y;  //x=10+20=30
	y=x-y;  //y=30-20=10
	x=x-y;  //x=30-10=20
	printf("After swapping, value of x = %f \n",x);
	printf("After swapping, value of y = %f \n",y);
	return EXIT_SUCCESS;
}
