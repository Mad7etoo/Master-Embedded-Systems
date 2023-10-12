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

int main(void)
{
	int x ;
	printf ("Enter an integer you want to check:");
	fflush (stdin );fflush (stdout);
	scanf("%d",&x);
	if (x%2==0){
		printf("%d is even \n",x);
	}
	else{
		printf("%d is odd \n",x);
	}
	/*   new method for this problem
	   x%2==0?
			printf("%d is even \n",x); :	printf("%d is odd \n",x); */

	return EXIT_SUCCESS;
}
