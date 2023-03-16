#include <stdio.h>
//factorial of 6 = 6*5*4*3*2*1

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

/*Output
Enter a number: 6
Factorial of 6 is 720
*/
