//Find a program to get all permutations from a series of different numbers

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%d", arr[i]);
        }
        printf(" ");
    }
    else {
        for (int i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            permute(arr, start+1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter each element for the given array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("All permutations: ");
    permute(arr, 0, n-1);
    
    return 0;
}

//Output
/*Enter number of elements in the array: 3
Enter each element for the given array: 4 6 7
All permutations: 467 476 647 674 764 746
*/
