#include <stdio.h>

void reverse_string(char *s) {
    char *start = s;
    char *end = s;
    char temp;

    // Find the end of the string
    while (*end != '\0') {
        end++;
    }
    end--;

    // Reverse the string using two pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char s[100];
    printf("Input a string: ");
    scanf("%s", s);

    reverse_string(s);
    printf("Reverse of the string is: %s\n", s);

    return 0;
}
/*
Input a string: SFBU
Reverse of the string is: UBFS
*/
