//Write program to delete duplicate elements in an array

#include <stdio.h>

int main() {
    int size, i, j, k, flag;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter each element for the given array: ");
    
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < size; i++) {
        flag = 0;
        
        for (j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}

//Output
//Enter size of array: 7 
//Enter each element for the given array: 0 3 2 7 0 3 -1
//2 7 0 3 -1 

