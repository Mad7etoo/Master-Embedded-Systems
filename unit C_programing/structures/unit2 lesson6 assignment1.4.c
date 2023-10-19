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
struct student {
	char name[50] ;
	float marks;
}student[10];
int main(void) {
	int roll;
	printf("Enter information of student:\n");
	for (roll=0;roll<10;roll++){
		printf("for roll number %d \n",roll+1);
		printf("Enter name: ");
		fflush(stdout); fflush(stdin);
		scanf("%s",&student[roll].name);
		printf("Enter marks: ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&student[roll].marks);
	}
	printf("Display information of students: \n");
	for (roll=0;roll<10;roll++){
		printf("information for roll number %d\n",roll+1);
		printf("name: %s\n",student[roll].name);
		printf("Marks: %0.1f\n",student[roll].marks);
	}
	return EXIT_SUCCESS;
}
