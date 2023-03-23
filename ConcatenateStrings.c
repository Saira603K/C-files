#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    strcat(str1, str2); // concatenate str2 to str1

    printf("Concatenated string: %s\n", str1);

    return 0;
}
/*
Enter the first string: saira
Enter the second string: khan
Concatenated string: sairakhan
*/
