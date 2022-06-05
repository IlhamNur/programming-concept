#include <stdio.h>

int main( void )
{
	
	// Question 3-A
	unsigned int sum = 0;
	unsigned int number, number1 = 0, number2 = 9;
	
	for ( number = 0; number <= 9; number += 1 ) {
		sum += number;
	}
	
	printf( "Sum of the integers within the range [%d , %d] is %u\n", number1, number2, sum );
	
	
	// Questuon 3-B
	int i;
	int j;
	
	puts("Numbers:");
	
	for ( i = 1; i <= 5; i++ ) {
		for( j = 1; j <= i; ++j ) {
			printf("%d", i);
		}
		if ( 5%i >= 0 ) {
			printf("\n");
		}
	}
	
	return 0;
			
	}
