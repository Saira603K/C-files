/* Input and output of a string using "gets()", "puts()", "getchar()",
and  "putchar()"
*/

#include <stdio.h>

int main() {
   char str[100];

   printf("Enter any string: ");
   gets(str);//reads a string of characters from the user input

   printf("Result: ");
   puts(str);//writes a string of characters read from the gets() method
   
   char c;

   printf("Enter a character: ");
   c = getchar();// reads only one character

   printf("Result: ");
   putchar(c); // writes only the first character of a long string

   return 0;
}

/* Output
Enter any string: hi everyone
Result: hi everyone
Enter a character: hello
Result: h
*/
