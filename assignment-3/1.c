#include <stdio.h>

void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;
	printf("Enter a positive number n to print first n fibonacci numbers: ");
	scanf("%d",&n);

	if (n < 1)
		return;
	printf("%d ", f1);
	for (i = 1; i < n; i++) {
		printf("%d ", f2);
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

int main()
{
	printFibonacciNumbers(7);
	return 0;
}
/* maaf jika pengerjaan saya tidak teratur dan atau bahkan tidak menemukan solusinya. 
	Saya berusaha mengejar ketertinggalan saya dari materi yang diberikan tapi belum bisa. 
	mohon dimaklumi karena pemrograman adalah hal yang baru bagi saya */
