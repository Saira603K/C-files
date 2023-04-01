/*write a program to check whether two given strings are anagram of each other r not.
An anagram of string is another string that contains same characters only the order 
of character can be different. like "abcd" and "dabc" are anagram
*/

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void sortString(char *str, int len) {
    int i, j;
    char temp;
    for (i = 0; i < len-1; i++) {
        for (j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];
    int len1, len2, i, flag = 1;
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if (len1 != len2) {
        flag = 0;
    }
    else {
        sortString(str1, len1);
        sortString(str2, len2);
        for (i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
    }
    
    if (flag) {
        printf("The two strings are anagrams of each other.\n");
    }
    else {
        printf("The two strings are not anagrams of each other.\n");
    }
    
    return 0;
}

/*Output
Enter the first string: djug
Enter the second string: abcd
The two strings are not anagrams of each other.
*/
/*
Enter the first string: abcd
Enter the second string: dcba
The two strings are anagrams of each other.
*/
