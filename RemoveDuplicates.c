
#include <stdio.h>

void sort(int arr[], int n);
void removeDuplicates(int arr[], int n);

int main() {
    int arr[100], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);
    removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        if (arr[i] != 0){
        printf("%d ", arr[i]);
        }
    }

    return 0;
}

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void removeDuplicates(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        while (arr[i] == arr[i + 1]) {
            for (j = i + 1; j < n; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    }
}
/*Output
Enter the size of the array: 5
Enter the elements of the array: 3 5 4 4 3
Array after removing duplicates: 3 4 5
*/
