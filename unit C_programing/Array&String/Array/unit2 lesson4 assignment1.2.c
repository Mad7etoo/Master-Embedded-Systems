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

int main(void) {

   int n ,i;
   printf ("enter numbers of data ");
   scanf ("%d",&n);
    float a[n] ,sum ,avg;

   for (i=0;i<n;i++)
     {
       printf ("%d enter number:",i+1);
      scanf("%f",&a[n]);
     }
     for (i=0 ;i<n ;i++)
     sum +=a[n];
     avg=sum /n;
    printf("the average of the numbers is %.2f\n",avg);

   }
