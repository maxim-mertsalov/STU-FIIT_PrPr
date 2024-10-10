#include <stdio.h>

int main() {
    int N;
    float max = 0.0;
    float min = 0.0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        float x;
        scanf("%f", &x);

        if (i == 0) {
            max = x;
            min = x;
        }

        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }

    printf("Minimum: %.2f Maximum: %.2f\n", min, max);

    return 0;
}