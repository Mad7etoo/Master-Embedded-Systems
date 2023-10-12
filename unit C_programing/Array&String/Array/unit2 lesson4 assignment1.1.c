/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

 /******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

int main(void) {
	float x[2][2],sum[2][2];
	printf ("Enter the first matrix \n");
	int i,j ;
	for(i=0;i<2 ;i++){
		for (j=0 ;j<2;j++)
		{printf ("a%d%d:",i+1,j+1);
		scanf("%f",&x[i][j]);
		}}
	printf("Enter the second matrix \n");
	float y[2][2];
	for(i=0 ;i<2;i++){
		for(j=0 ;j<2;j++){
			printf("b%d%d:",j+1,j+1);
			scanf("%f",&y[i][j]);

		}
	}
	for (i=0;i<2;i++)
	 for (j=0 ;j<2;j++)
	{sum[i][j] = x[i][j] + y[i][j];}
	printf("Sum of Matrices:\n");
    printf("%f\t%f\n%f\t%f\n",sum[0][0],sum[0][1],sum[1][0],sum[1][1]);
	return EXIT_SUCCESS;
}

