// Printing an array

#include<stdio.h>

#define PRINTARRAY(array,length) \
int i; \
for(i=0; i<length; i++) \
    printf("%d ",array[i]);

int main(void) {
	
    int array[5]={22, 20, 16, 3, 1};
    
    PRINTARRAY(array,5);
    
    return 0;
}


