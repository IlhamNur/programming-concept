#include <stdio.h>  
#include <string.h> 

char p[5];
typedef char *s;
	s nama[13]={"0", "Ayam", "Susu", "Buah", "Ikan", "Kaos", "Celana", "Kemeja", "Switer", "Mug", "Wajan", "Mangkuk", "Piring"};	
typedef char *s1;
	s1 setNama[100];
int i, j, barang, pembayaran, kembali, kurang, setKode, tsh=0, value=0, jumlah[100], totalharga[100], setjumlah[100], setHarga[100], getKode[100];
int size = sizeof(nama)/sizeof(nama[0]);
int kode[]={0, 9110101, 9110102, 9110103, 9110104, 9110201, 9110202, 9110203, 9110204, 9110301, 9110302, 9110303, 9110304};
int harga[]={0, 35000, 11000, 15000, 10000, 55000, 65000, 80000, 110000, 20000, 25000, 10000, 8000};      
int main () {
	
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|       999999        111        111      |\n");
	printf("\t\t\t|      99    99      1111       1111      |\n");
	printf("\t\t\t|      99    99     11111      11111      |\n");
	printf("\t\t\t|       9999999        11         11      |\n");
	printf("\t\t\t|            99        11         11      |\n");
	printf("\t\t\t|           999        11         11      |\n");
	printf("\t\t\t|      9999999         11         11      |\n");
	printf("\t\t\t-------------------------------------------\n");
	printf("\t\t\t=================== MART ==================\n");
	printf("\t\t\t-------------------------------------------\n");
	printf("\t\t\t|                                         |\n");
	printf("\t\t\t-------------------------------------------\n");
	printf("\t\t\t  Daftar Barang Yang Tersedia Di 911 MART  \n");
	printf("\t\t\t===========================================\n");
	printf("\t\t\t|  Kode  | Nama Barang | Harga Barang(Rp) |\n");
	printf("\t\t\t|--------|-------------|------------------|\n");
	for(i=1; i<13 ; i++) {
		printf("\t\t\t|%d |%12s |Rp.%11d.00 |\n", kode[i], nama[i], harga[i]);  
	}
	printf("\t\t\t===========================================\n");
	
    awal:
    	printf("\t\t\t Masukkan banyak barang\t\t: ");
    	scanf("%i",&barang);

    	for(i=1; i<=barang; i++) {
    		printf("\n");
			printf("\t\t\t Masukkan kode barang ke-%i\t: ",i);
        	scanf("%d", &setKode);
        	printf("\t\t\t Masukkan jumlah barang\t\t: ");
        	scanf("%i", &setjumlah[i]);
			for(j=0; j<size; j++) { 
		        if(kode[j]==setKode) {
		        	getKode[i]=kode[j];
		        	setHarga[i]=harga[j]; 
		        	setNama[i]=nama[j];
		            totalharga[i]=setjumlah[i]*harga[j]; 
					tsh=tsh+totalharga[i]; 
		        }
	    	}
        printf("\n");
	}
	
    	printf("\t\t\t Total harga keseluruhan\t: Rp. %i\n", tsh);
    	printf("\t\t\t Masukkan jumlah pembayaran\t: Rp. ");
    	scanf("%i", &pembayaran);
    	kembali=pembayaran-tsh;     
    	printf("\t\t\t===========================================\n");
    	
    	printf("\t\t\t Daftar belanja anda:\n");
    	i=1;
    	do {
    		printf("\t\t\t %i. %i %s (@ Rp. %i)\t: Rp. %i\n", i, setjumlah[i], setNama[i], setHarga[i], totalharga[i]);
    		i++;
    	}
  		while (i<=barang);
	                   
    	if(pembayaran>=tsh) {
        	value=1;
    	}
    	else {
    		value=2;
		}

    	switch (value) {
  			case 1:
  				printf("\t\t\t Total harga\t\t\t: Rp. %i\n", tsh);
        		printf("\t\t\t Pembayaran\t\t\t: Rp. %i\n", pembayaran);
        		printf("\t\t\t Kembalian\t\t\t: Rp. %i\n", kembali);
    			break;
  			case 2:
    			kurang=-1*kembali;
        		printf("\t\t\t Total harga\t\t\t: Rp. %i\n", tsh);
        		printf("\t\t\t Pembayaran\t\t\t: Rp. %i\n", pembayaran);
        		printf("\t\t\t Kekurangan\t\t\t: Rp. %i\n", kurang);
    			break;
				default: printf("\n");	
    	}
    
	pilih:
    	printf("\n\t\t\t Ulangi (y/t): ");
    	scanf("%s", &p);
    	if(strcmp(p,"y")==0||strcmp(p,"Y")==0) {
			goto awal;          
    	}
    	else if(strcmp(p,"t")==0||strcmp(p,"T")==0) {
    		printf("\t\t\t===========================================\n");
    		printf("\t\t\t|                Terimakasih              |\n");
			printf("\t\t\t|             Telah berbelanja            |\n");
    		printf("\t\t\t|                    Di                   |\n");
    		printf("\t\t\t|                 911 MART                |\n");
    		printf("\t\t\t===========================================");
    	}
    	else {
    		printf("\t\t\t Masukkan pilihan yang benar...\n");
        	goto pilih;
		}	

return 0;
}
