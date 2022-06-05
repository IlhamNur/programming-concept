#include <stdio.h>
#define MAKS 1000

int main() {
    FILE *fPtr1; 
    FILE *fPtr2;
    char namfl1[MAKS], namfl2[MAKS];
    
	printf("Tolong input dua nama file yang akan dibandingkan dengan format namafile.type\n");
	
	input:
    printf("\nInput nama file pertama	: ");
    scanf("%s", namfl1);
    printf("Input nama file kedua	: ");
    scanf("%s", namfl2);

    fPtr1 = fopen(namfl1, "r");
    fPtr2 = fopen(namfl2, "r");

    if (fPtr1 == NULL || fPtr2 == NULL) {
        printf("\nTidak dapat membuka file.\n");
        printf("Tolong cek ulang nama file yang dimasukkan dan pastikan file benar-benar ada.\n");
        goto input;
    }
	
    printf("\nBaris dengan konten yang sama : \n");
        
    while(fgets(namfl1, sizeof(namfl1) , fPtr1) && fgets(namfl2, sizeof(namfl2), fPtr2)) {
        if(strcmp(namfl1, namfl2) == 0) { 
       		printf("%s", namfl1); 
        }
	}
    
    fclose(fPtr1);
    fclose(fPtr2);
    
    return 0;
}
