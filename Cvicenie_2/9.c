#include <stdio.h>

int main() {
    int N = 11;

    int arr[N];

    for (int i = 0; i < N; i++) {
        int input;
        scanf("%d", &input);

        arr[i] = input;
    }

    if (!(arr[0] >= 0 && arr[0] <= 10)) {
        printf("Postupnost nie je spravna");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        if (i > 1) {
            if (!(arr[i] <= arr[i - 1] * 2)) {
                printf("Postupnost nie je spravna");
                return 0;
            }
            if (!(arr[i] >= arr[i - 1] / 2)) {
                printf("Postupnost nie je spravna");
                return 0;
            }

        }

    }

    // 3 5 <7> 9
    // 10 > 7 && 2,5 < 7

    printf("Postupnost je spravna");

    return 0;
}