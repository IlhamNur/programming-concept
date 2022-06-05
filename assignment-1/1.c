#include <stdio.h>

int main() {
	int a;
	int b;
	int c1, c2;
	float d1, d2;
	
	printf("A.");
	printf("Please enter an integer: ");
	scanf("%d", &a);
    if (a % 2 == 0) { 
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }

    printf("B.");
    printf("Please enter an integer: ");
    scanf("%d", &b);
    if (b < 0) { 
        printf("%d is negative\n", b);
    } else { 
        printf("%d is positive\n", b);
	}

    printf("C.");
    printf("Please enter two integers: ");
    scanf("%d%d", &c1, &c2);
    if (c2 < c1) {
        printf("Smaller one is %d\n", c2);
    } else { 
        printf("Smaller one is %d\n", c1);
    }

    printf("D.");
    printf("Please enter two real numbers: ");
    scanf("%f%f", &d1, &d2);
    printf("Multiplication result is %.3f\n", (d1 * d2)); 
    
	return 0;
	
}

	

