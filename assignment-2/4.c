#include<stdio.h>

int main(void)
{
	int number = 10;
	
	
	// switch-case
	printf("Please enter your grade:  ");
    scanf("%d",&number );

    switch( number )
     {

    case 85 ... 100 :
        printf("Your letter grade is A.\n");
        break;
        
	 case 80 ... 84 :
        printf("Your letter grade is A-.\n");
        break;

    case 75 ... 79 :
        printf("Your letter grade is B+.\n");
        break;
    
	case 70 ... 74 :
        printf("Your letter grade is B.\n");
        break;
		 
	case 65 ... 69 :
        printf("Your letter grade is C+.\n");
        break;
        
     case 60 ... 64 :
        printf("Your letter grade is C.\n");
        break;
        
     case 55 ... 59 :
        printf("Your letter grade is D.\n");
        break;
		 	 	
    case 0 ... 54 :
        printf("Your letter grade is E.\n");
        break;

     }

	
	// if-else
	printf("Please enter your grade:  ");
	scanf("%d",&number);

	if( number >= 85 ) {
	printf("Your letter grade is A.");
		}
	else if ( number >= 80 ) {
		printf("Your letter grade is A-.");
		}
	else if ( number >= 75 ) {
		printf("Your letter grade is B+.");
		}
	else if ( number >= 70 ) {
		printf("Your letter grade is B.");
		}
	else if ( number >= 65 ) {
		printf("Your letter grade is C+.");
		}
	else if ( number >= 60 ) {
		printf("Your letter grade is C.");
		}
	else if ( number >= 55 ) {
		printf("Your letter grade is D.");
		}
	else if ( number >= 0 ) {
		printf("Your letter grade is E.");
		}

	return 0;
	
}

