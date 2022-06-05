#include <stdio.h>

int main( void )
{
    
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 1;
    
    puts("Please enter the grades: ");

    while( ( grade = getchar() ) != EOF ) {  
        
        switch ( grade ) {
            
            case 0 ... 59 :
            	++cCount;
                break;
                
            case 60 ... 84 :
                ++bCount;
                break;
            
             case 85 ... 100 :
            	++cCount;
                break;
                
            default :
            	printf ("%s", "incorrect letter grade entered.");
                break;
        }
    }
    
    printf( "Total number of honor students : %u\n", aCount );
    printf( "Total number of satisfactory students : %u\n", bCount );
    printf( "Total number of unsatisfactory students: %u\n", cCount) ;    
}

