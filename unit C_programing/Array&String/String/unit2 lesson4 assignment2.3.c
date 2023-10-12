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
#include <string.h>
int main(void) {
	char x[100] ,y[100];
	int i , n=0;
	printf(" enter the string:");
	fflush(stdout);     	fflush(stdin);
	gets(x);
	n=strlen(x);
	for (i=0; i <n+1;i++)
	{ y[i]=x[n-i-1];
	}
  printf ("reverse string is :%s",y);
	return EXIT_SUCCESS;
}
