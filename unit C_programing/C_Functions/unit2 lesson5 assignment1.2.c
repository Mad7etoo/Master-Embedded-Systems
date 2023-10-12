


#include <stdio.h>
#include <stdlib.h>



  int check_fact(int num ){
	 int fact=1 ;
	 for (int i =num ;i>=1;i--){
	  	fact *= i;
	 }  return fact;
  }

 int main(void) {
	int x ;
	printf ("enter positive integer: ");
    	fflush (stdout ); fflush (stdin );
	 scanf ("%d",&x);
	  printf("factorial of %d = %d",x,check_fact(x)  );
	return EXIT_SUCCESS;
}
