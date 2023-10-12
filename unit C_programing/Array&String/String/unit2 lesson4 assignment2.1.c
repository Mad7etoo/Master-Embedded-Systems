/*
 ============================================================================
 Name        : 1.c
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

	char x[10000] , ch;
	int  i , count=0 ;
	printf ("enter a string : \n");
	fflush (stdin );  fflush(stdout);
	gets (x);
	printf ("enter a character to find frequency ");
	fflush (stdin );  fflush(stdout);
	scanf("%c",&ch);
	for (i=0 ; i< strlen(x) ;i++)
	{ if(ch==x[i])
		++count;
	}
	printf ("frequency of %c = %d" , ch , count) ;
	return EXIT_SUCCESS;
}
