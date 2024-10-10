#include <math.h>
#include <stdio.h>

int main() {
    float kg, v;
    scanf("%f %f", &v, &kg);

    v *= 0.01;

    printf("BMI: %.3f", kg / pow(v, 2));

    return 0;
}
