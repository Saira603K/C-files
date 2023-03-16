/*Functions strrev() including some other string function such as like strupr , 
strlwr , strrev , which are only available in ANSI C (Turbo C/C++) and 
are not available in standard C-GCC compiler. It's not about the system.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    if (strcmp(str, rev) == 0) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}

 /*Output
 Enter a string: abc
abc is not a palindrome

Enter a string: radar
radar is a palindrome*/

