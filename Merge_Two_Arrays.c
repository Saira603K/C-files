/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k, found;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    k = 0;
    for (i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            merged[k++] = arr2[i];
        }
    }

    printf("Merged array (excluding repeating elements): ");
    for (i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

/*Output:
Enter the size of the first array: 3
Enter the elements of the first array: 3 5 7
Enter the size of the second array: 3
Enter the elements of the second array: 2 5 9
Merged array(excluding repeating elements): 3 5 7 2 9
*/

