#include <stdio.h>
#include "kalksed.h"

#define ANGK1 6
#define ANGK2 5

main() {

	#if !defined ANGK1 || !defined ANGK2
	int a,b;
		
	printf("Tolong input dua angka ");
	scanf("%d%d", &a, &b);
	
	printf("Hasil penjumlahan : %d\n", penjumlahan(a, b));
	printf("Hasil penguranga : %d\n", pengurangan(a, b));
	printf("Hasil perkalian : %d\n", perkalian(a, b));
	printf("Hasil pembagian : %.2f\n", pembagian(a, b));
	
	#else
	printf("Hasil penjumlahan : %d\n", penjumlahan(ANGK1, ANGK2));
	printf("Hasil penguranga : %d\n", pengurangan(ANGK1, ANGK2));
	printf("Hasil perkalian : %d\n", perkalian(ANGK1, ANGK2));
	printf("Hasil pembagian : %.2f\n", pembagian(ANGK1, ANGK2));
	
	#endif
		
	return 0;
}
