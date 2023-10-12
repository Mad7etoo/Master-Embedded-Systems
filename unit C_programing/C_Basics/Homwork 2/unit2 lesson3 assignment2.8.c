/*
 ============================================================================
 Name        : 8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;
	float y ,z;
		printf("Enter operator either + or * or / or - : \n");
		fflush(stdin);	fflush(stdout);
		scanf("%c",&x);
		printf("Enter two operands ");
		fflush(stdin);	fflush(stdout);
		scanf ("%f%f",&y,&z);
if (x=='*')
printf("%f%c%f = %f",y,x,z,y*z);
  else if (x=='/')
   printf("%f%c%f = %f",y,x,z,y/z);
   else if (x=='+')
   printf("%f%c%f = %f",y,x,z,y+z);
   else
   printf("%f%c%f = %f",y,x,z,y-z);
	return EXIT_SUCCESS;
}
