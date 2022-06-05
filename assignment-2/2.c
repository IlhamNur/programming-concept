#include <math.h>
#include <stdio.h>

int main() {
	char operator;
    double number1, number2;
    printf("Please enter two integers:  ");
    scanf("%lf %lf", &number1, &number2);
    printf("Please choose an operation:\n\n Press 1 for ADDITION\n Press 2 for SUBTRACTION\n Press 3 for MULTIPLICATION\n Press 4 for DIVISION\n Press 5 for SQUARE ROOT\n Press 6 for EXIT\n");
    scanf("%c", &operator);
    
    while ( ( operator = getchar() ) != EOF ) {

    switch (operator) {
    case '1':
        printf("The result is %.lf\n", number1 + number2);
        break;
    case '2':
        printf("The result is %.lf\n", number1 - number2);
        break;
    case '3':
        printf("The result is %.lf\n", number1 * number2);
        break;
    case '4':
        printf("The result is %.lf\n", number1 / number2);
        break;
    case '5':
        printf("The result is %.3lf and %.3lf\n", sqrt(number1), sqrt(number2));
        break;
     case '6':
        return 0;
        break;
    }
}

    return 0;
    
}

