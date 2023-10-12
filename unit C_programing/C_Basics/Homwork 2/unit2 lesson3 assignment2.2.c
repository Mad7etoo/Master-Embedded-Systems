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
	char x;
	printf("Enter an alphabet:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if (x=='a' || x=='e'||x=='o'|| x=='i'|| x=='u')
		printf("%c is a vowel",x);
	else
		printf("%c is a consonant",x);
	return EXIT_SUCCESS;

}
