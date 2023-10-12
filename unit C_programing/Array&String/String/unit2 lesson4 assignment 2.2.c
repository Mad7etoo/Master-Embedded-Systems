/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x[50];
	int i;
	printf ("enter a string :");
	fflush(stdout);     	fflush(stdin);
	gets(x);
	for(i=0 ; x[i] !=0 ; i++){}
	printf ("length of string : %d",i);
	return EXIT_SUCCESS;
}
