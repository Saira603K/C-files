#include <stdio.h>

int *findMinMax(int arr[], int size);

int main() {
    int size, i;
    int arr[100]; // assuming a maximum array size of 100
    int *result;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    result = findMinMax(arr, size);

    printf("Minimum value: %d\n", result[0]);
    printf("Maximum value: %d\n", result[1]);

    return 0;
}

int *findMinMax(int arr[], int size) {
    static int result[2]; // static array to hold the minimum and maximum values
    int i;

    result[0] = arr[0]; // initialize the minimum and maximum values to the first element
    result[1] = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < result[0]) {
            result[0] = arr[i]; // update the minimum value
        }
        if (arr[i] > result[1]) {
            result[1] = arr[i]; // update the maximum value
        }
    }

    return result; // return the array of minimum and maximum values
}
/*
Enter the size of the array: 6
Enter the elements of the array: 2 7 54 3 9 1
Minimum value: 1
Maximum value: 54
*/
