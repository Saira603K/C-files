#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void bubbleSort(char names[MAX_NAMES][MAX_NAME_LENGTH], int n);

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names: ");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    bubbleSort(names, n);

    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void bubbleSort(char names[MAX_NAMES][MAX_NAME_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
/* 
Enter the number of names: 4
Enter the names: saira asim leo cloudy
Sorted names:
asim
cloudy
leo
saira
*/
