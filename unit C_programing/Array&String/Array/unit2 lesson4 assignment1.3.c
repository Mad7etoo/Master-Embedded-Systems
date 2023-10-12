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

int main(void) {
	int x ,y,i,j;
	printf ("Enter rows and column of matrix:\n");
	fflush (stdin);  	fflush (stdout);
	scanf ("%d%d",&x,&y);
	int a[x][y] ,b[x][y];
	printf ("enter element of matrix:\n");
	for (i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("enter elements a %d%d : ",i+1,j+1);
			fflush (stdin);  	fflush (stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf ("entered Matrix :\n");
	for (i=0;i<x;i++)
	{for(j=0;j<y;j++){
		printf ("%d\t",a[i][j]);
	}
	printf("\n");    	 }
	for (i=0;i<x;i++)
	{  for(j=0;j<y;j++)
		b[i][j]=a[i][j];
	}
	printf("The transpose of the matrix is:\n");
	for(j=0;j<y;j++)
	{	for (i=0;i<x;i++){
		printf("%d\t",b[i][j]);
	}
	printf ("\n");
	}
}
