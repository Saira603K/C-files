#include <stdio.h>

void findFactorial(int num, int *factPtr);

int main() {
    int num, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    findFactorial(num, &fact); // pass the address of fact variable to the function

    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}

void findFactorial(int num, int *factPtr) {
    int i;

    *factPtr = 1; // initialize the factPtr to 1

    for (i = 1; i <= num; i++) {
        *factPtr = *factPtr * i; // calculate the factorial using pointer
    }
}
/*
Enter a number: 5
Factorial of 5 is 120
*/
