// Online C compiler to run C program online
// Generate a program to find the desried kth smallest element in an array

#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int removeDuplicates(int arr[], int N) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[j] == arr[i]) {
                for (k = j; k < N; k++) {
                    arr[k] = arr[k + 1];
                }
                N--;
                j--;
            }
        }
    }
    return N;
}

int kthSmallest(int arr[], int N, int K) {
    qsort(arr, N, sizeof(int), cmpfunc);
    return arr[K - 1];
}

int main() {
    int N, K;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    N = removeDuplicates(arr, N);

    printf("Enter the value of K: ");
    scanf("%d", &K);

    printf("K'th smallest element is %d", kthSmallest(arr, N, K));
    return 0;
}


 /*Output
 Enter the size of the array: 7
Enter 7 integers:
3 3 4 6 4 3 7
Enter the value of K: 3
K'th smallest element is 6
*/
