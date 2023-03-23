#include <stdio.h>

int string_length(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);//scanf("%[^\n]s", s), will read all characters until it encounters a newline character.

    int length = string_length(s);
    printf("The length of the string is: %d\n", length);

    return 0;
}
/*
Enter a string: saira khan
The length of the string is: 10
*/
