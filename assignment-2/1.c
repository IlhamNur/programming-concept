#include <stdio.h>

int main( void )
{
	unsigned int counter = 0;
		
	do {
		printf( "%u ", counter*counter*counter*counter*counter*counter*counter );
	} while ( ++counter < 4);
	
	return 0;
	
}
