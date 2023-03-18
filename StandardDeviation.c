// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

float calculateSD(float data[], int N) {
    float sum = 0.0, mean, SD = 0.0;

    // Calculate mean
    for (int i = 0; i < N; ++i) {
        sum += data[i];
    }
    mean = sum / N;

    // Calculate standard deviation
    for (int i = 0; i < N; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD / N);
}

int main() {
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    float data[N];
    printf("Enter %d real numbers:\n", N);
    for (int i = 0; i < N; ++i) {
        scanf("%f", &data[i]);
    }

    float SD = calculateSD(data, N);
    printf("Standard deviation = %f", SD);

    return 0;
}

/*output
Enter the number of elements: 5
Enter 5 real numbers:
23 19 559 332 12
Standard deviation = 221.419968
*/
