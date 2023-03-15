
#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Error: The number of columns of first matrix must be equal to the number of rows of second matrix.\n");
        return 1;
    }

    int A[m1][n1], B[m2][n2], C[m1][n2];

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            C[i][j] = 0;
            for (k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Output:
Enter the number of rows and columns of first matrix: 1 2 3 4 5 6
Enter the number of rows and columns of second matrix: 1 4 2 5 3 6
Product of the matrices:
14 32
32 77
*/

