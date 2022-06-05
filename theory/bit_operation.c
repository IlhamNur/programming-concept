#include<stdio.h>
void displayBits(unsigned value){
	unsigned c, displayMask = 1<<31;
	
	for(c = 1; c<= 32; c++ ){
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1;
		
		if(c%8 == 0) putchar(' ');
	}
	putchar('\n');
}

int main(){
	int a = 9, b = 21, temp;
	printf("a = ");
	displayBits(a);
	printf("b = ");
	displayBits(b);
	
	temp = a&b;
	printf("a & b = ");
	displayBits(temp);
	
	temp = a|b;
	printf("a | b = ");
	displayBits(temp);
	
	temp = a^b;
	printf("a ^ b = ");
	displayBits(temp);
	
	temp = a<<1;
	printf("a<<1 = ");
	displayBits(temp);
	
	temp = b<<2;
	printf("b<<2 = ");
	displayBits(temp);
	
	temp = a>>1;
	printf("a>>1 = ");
	displayBits(temp);
	
	temp = b>>2;
	printf("b>>2 = ");
	displayBits(temp);
	
	temp = ~a;
	printf("~a = ");
	displayBits(temp);
	
	temp = ~b;
	printf("~b = ");
	displayBits(temp);
}
