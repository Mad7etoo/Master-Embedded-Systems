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

struct distance{
	int feet ;
	float inch ;
}d1 ,d2,sum ;

int main(void) {

	printf ("Enter information for 1st distance \n");
	printf("Enter feet :");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&d1.feet);
	printf("Enter inch");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&d1.inch);
	printf("Enter information for 2nd distance \n");
	printf("Enter feet :");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&d2.feet);
	printf("Enter inch");
	fflush(stdout);  fflush(stdin);
	scanf("%f",&d2.inch);
	sum.feet =d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if (sum.inch >12.0){
		sum.inch=sum.inch-12.0;
		++sum.feet;
	}
	printf("sum of distances=%d-%f",sum.feet ,sum.inch);
	return EXIT_SUCCESS;
}
