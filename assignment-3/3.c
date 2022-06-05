#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int a[3][4] = { 13, 14, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9}; 
   int rowSize;
   int sum (int a[3][4], int rowSize); //sum function returns the sum of the first values of every row of the given 2-D array;
   puts ("Enter integers to fill a 3x4 matrix...\n");
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("Enter number for [%d][%d]:\n", i, j);
      }
   }
   //Displaying array elements
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("%d ", a[i][j]);
      }
   }
   return 0;
}
/* maaf jika pengerjaan saya tidak teratur dan atau bahkan tidak menemukan solusinya. 
	Saya berusaha mengejar ketertinggalan saya dari materi yang diberikan tapi belum bisa. 
	mohon dimaklumi karena pemrograman adalah hal yang baru bagi saya */
