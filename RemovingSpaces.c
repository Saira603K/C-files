#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    // Remove all white spaces
    int i, j;
    for (i = 0, j = 0; sentence[i]; i++) {
        if (sentence[i] != ' ') {
            sentence[j++] = sentence[i];
        }
    }
    sentence[j] = '\0';

    // Replace all "." with ":"
    for (i = 0; sentence[i]; i++) {
        if (sentence[i] == '.') {
            sentence[i] = ':';
        }
    }

    printf("Result: %s\n", sentence);

    return 0;
}
/*
Enter a sentence: your shell will have it's own version. which is usually described here.
Result: yourshellwillhaveit'sownversion:whichisusuallydescribedhere:
*/
