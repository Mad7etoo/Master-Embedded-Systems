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
	int x,factorial=1;
	printf("Enter an integer");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	if (x>=0){
	for(int i=1;i<=x;i++)
	{
		factorial *=i;
	}
	printf("factorial = %d",factorial);
	}
	else
		printf("Error!!! factorial of negative number doesn't exist ");
	return EXIT_SUCCESS;
}
