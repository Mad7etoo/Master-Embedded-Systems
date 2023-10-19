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
struct complex {
	float real ;
	float imag ;
}d1,d2,sum;
int main(void) {
	printf("for 1st complex number\n");
	printf ("Enter real and imaginary respectively:");
	fflush (stdout); fflush(stdin);
	scanf("%f\t%f",&d1.real,&d1.imag);
	printf("for 2nd complex number\n");
	printf ("Enter real and imaginary respectively:");
	fflush (stdout); fflush(stdin);
	scanf("%f\t%f",&d2.real,&d2.imag);
	addcomplex(d1,d2);
	return EXIT_SUCCESS;
}
void addcomplex(struct complex d1,struct complex d2){

	sum.real=d1.real+d2.real;
	sum.imag=d1.imag+d2.imag;
	printf("sum=%.1f+%0.1fi",sum.real,sum.imag);
}
