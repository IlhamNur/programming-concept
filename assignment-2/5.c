#include<stdio.h>

int main()
{
	int sum = 1,number ;
	printf ( "Enter a nonnegative integer: " );
	scanf ( "%d", &number );
	
	int i;
	for ( i = 1; i <= number; i++ )
	{
		sum = i*sum;
	}
	printf ( "%d! = %d", number, sum );
	
	return 0;
	
}
