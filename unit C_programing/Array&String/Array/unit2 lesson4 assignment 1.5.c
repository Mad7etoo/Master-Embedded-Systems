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
	int n ,i,x ;
	printf ("Enter no of elements : ");
	fflush (stdin );  fflush(stdout);
	scanf ("%d",&n);
	int a[n];
	for(i=0 ;i<n;i++){
		scanf ("%d",&a[i])	;
		printf("%d ",a[i]);
	}
	printf ("\n");
	printf ("Enter the elements to be searched : ");
	fflush (stdin );  fflush(stdout);
	scanf ("%d",&x);

	for (i=0;i<n;i++){
		if (x==a[i])
		{printf("Number at the location =%d\n",i+1)
	}	}
	return EXIT_SUCCESS;
}
