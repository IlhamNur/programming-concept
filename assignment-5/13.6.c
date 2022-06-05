// Smallest of two numbers

#include <stdio.h>

#define MINIMUM2(a,b) ((a)<(b) ? (a):(b))

int main(void) {
	
	int num1,num2;
	printf("Please enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	
	printf("The smallest of two numbers is: %d" ,MINIMUM2(num1,num2));
	
	return 0;
}
