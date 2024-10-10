#include <math.h>
#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);

    printf("%.0f %.0f", floorf(a), roundf(a));

    return 0;
}
