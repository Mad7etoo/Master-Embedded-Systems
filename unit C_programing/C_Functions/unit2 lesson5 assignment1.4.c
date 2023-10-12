/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
   void calculate_power (int x ,int y){
       int z=x;
       for (int i=1;i<y;i++){
           z*=x;
       }
	   printf("%d^%d =%d",x,y,z);
   }
int main(void) {
	int num ,power ;
	printf ("enter base number:");
	fflush (stdin);  fflush (stdout);
	scanf ("%d",&num);
	printf("enter power number:");
	fflush (stdin);  fflush (stdout);
	scanf("%d",&power);
	calculate_power(num ,power);
	return EXIT_SUCCESS;
}
