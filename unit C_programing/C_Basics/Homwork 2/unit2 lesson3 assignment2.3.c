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

int main(void) {
	float x ,y , z ;
	printf ("enter three numbers:");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);
	if (x>=y&&x>=z)
		printf("largest number = %f",x);
		else if (y>=x&&y>=z)
			printf("largest number = %f",y);
		else
				printf("largest number = %f",z);

				return EXIT_SUCCESS;
}

