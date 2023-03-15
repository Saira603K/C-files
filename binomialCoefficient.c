/******************************************************************************

Welcome to GDB Online.
*******************************************************************************/
#include<stdio.h>
// Function for binomial coefficient table
int bin_table(int val) {
   for (int i = 0; i <= val; i++) {
      printf("%2d", i);
      int num = 1;
      for (int j = 0; j <= i; j++) {
         if (i != 0 && j != 0)
         num = num * (i - j + 1) / j;
         printf("%4d", num);
      }
      printf("\n");
   }
}
int main() {
   int value = 5;
   bin_table(value);
   return 0;
}
/* Output
0  1
1  1  1
2  1  2  1
3  1  3  3  1
4  1  4  6  4  1
5  1  5 10 10  1
*/
