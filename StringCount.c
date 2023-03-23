//count the number of words and characters in a string

#include <stdio.h>

int main() {
    char sentence[100];
    int num_chars = 0, num_words = 1; // initialize word count to 1 since the last word won't have a space after it
    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin); // read input from user
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            num_words++;
        } else {
            num_chars++;
        }
    }
    printf("Number of characters: %d\n", num_chars);
    printf("Number of words: %d\n", num_words);
    return 0;
}
/*
Enter a sentence: dsklsla
Number of characters: 8
Number of words: 1
*/
