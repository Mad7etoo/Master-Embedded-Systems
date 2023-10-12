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
	char i ;
	printf("enter a character :");
	fflush(stdin); fflush(stdout);
	scanf ("%c",&i);
	if (i>='a' &&i<='z')
		printf ("%c is an alphabet ",i);
	else if(i>='A' &&i<='Z')
		printf ("%c is an alphabet ",i);
	else
		printf("%c is not an alphabet",i)  ;
}
