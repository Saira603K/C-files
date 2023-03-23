/*This function takes two integers a and b, and two pointers to integers quotient and remainder. It calculates the quotient and remainder of a divided by b using the division operator / and modulo operator %, respectively.*/

void div_rem(int a, int b, int *quotient, int *remainder) {
    *quotient = a / b;      // Calculate quotient and store it in the pointer to quotient
    *remainder = a % b;    // Calculate remainder and store it in the pointer to remainder
}

int main() {
    int a, b;
    int quotient, remainder;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    div_rem(a, b, &quotient, &remainder);  // Pass the addresses of quotient and remainder to the function

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}

/*Enter two numbers: 5 3
Quotient = 1
Remainder = 2
*/
