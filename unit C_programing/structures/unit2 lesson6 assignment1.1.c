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
 struct student {
	 char name[50];
	 int roll ;
	 float marks ;

 };

int main(void) {
	 struct student s ;
	 printf ("Enter information of students:\n");
	 printf("Enter name :");
	 fflush(stdout);  fflush(stdin);
	 scanf("%s",&s.name);
	 printf("Enter roll number");
	 fflush(stdout);  fflush(stdin);
	 scanf("%d",&s.roll);
	 printf("Enter marks:");
	 fflush(stdout);  fflush(stdin);
	 scanf("%f",&s.marks);
	 printf("The information \n");
	 printf("name: %s\n",s.name );
	 printf("roll:%d\n",s.roll);
	 printf("marks %s\n",s.marks);
	return EXIT_SUCCESS;
}
