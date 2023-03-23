#include <stdio.h>

int* biggest_of_two(int* a, int* b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}

int* biggest_of_three(int* a, int* b, int* c) {
    if (*a > *b && *a > *c) {
        return a;
    } else if (*b > *a && *b > *c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y , z;
    int *result;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Call biggest_of_two function and print result
    result = biggest_of_two(&x, &y);
    printf("The biggest number of %d and %d is %d\n", x, y, *result);

    // Call biggest_of_three function and print result
    result = biggest_of_three(&x, &y, &z);
    printf("The biggest number of %d, %d, and %d is %d\n", x, y, z, *result);

    return 0;
}
/*
Enter 3 numbers: 8 5 3
The biggest number of 8 and 5 is 8
The biggest number of 8, 5, and 3 is 8
*/
