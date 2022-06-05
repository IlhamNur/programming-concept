#include <stdio.h>
		
float sum(unsigned int n) {
	printf("Please enter a number for calculating the sequence:");
	scanf("%f",&n);
	
 if (n == 1)
  return 1.0f;
 return sum(n - 1) + 1.0f/(2*n-1);
}
int main( )
{
	printf("%f", sum(2));
	}
/* maaf jika pengerjaan saya tidak teratur dan atau bahkan tidak menemukan solusinya. 
	Saya berusaha mengejar ketertinggalan saya dari materi yang diberikan tapi belum bisa. 
	mohon dimaklumi karena pemrograman adalah hal yang baru bagi saya */
