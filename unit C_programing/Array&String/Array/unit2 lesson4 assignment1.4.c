/*
 ============================================================================
 Name        : 4.c    karim medhat
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,i,j,x;
	printf ("Enter no of elements : ");
	fflush (stdin );  fflush(stdout);
	scanf ("%d",&n);
	int a[n];
	for (i=0 ;i<n;i++)
	{scanf("%d",&a[i]);
	printf ("%d  ",a[i]);
	}
	printf("\n");
	printf ("Enter the element to be inserted : ");
	fflush (stdin );  fflush(stdout);
	scanf ("%d",&j);
	printf ("enter the location : ");
	fflush (stdin );  fflush(stdout);
	scanf ("%d",&x);
    for(i=n;i>=x;i--){
        a[i]=a[i-1];
    }
   n++;
   a[x-1]  =j;
   for (i=0 ;i<n;i++)
    printf("%d\t",a[i]);

	return EXIT_SUCCESS;
}
