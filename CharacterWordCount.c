#include <stdio.h>

int main() {
    char sentence[100];
    int num_chars = 0, num_words = 0; // initialize word count to 0
    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence); // read input from user until a newline character is encountered
    printf("Number of characters for each word: \n");
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') { // end of word
            if (num_chars > 0) { // ignore empty words
                printf("%d ", num_chars);
                num_chars = 0; // reset character count for next word
                num_words++; // increment word count
            }
        } else {
            num_chars++; // increment character count for current word
        }
    }
    printf("%d\n", num_chars); // print the number of characters for the last word
    printf("Total number of words: %d\n", num_words + 1); // add 1 to account for the last word
    return 0;
}


/*
Enter a sentence: San Francisco Bay University
Number of characters for each word: 
3 9 3 10
Total number of words: 4
*/
