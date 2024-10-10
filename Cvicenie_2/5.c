#include <stdio.h>

int main() {
    int c1, c2;
    int res;
    char znak;

    scanf("%d %d %c", &c1, &c2, &znak);

    if (znak == '+') {
        res = c1 + c2;
    }
    else if (znak == '-') {
        res = c2 - c1;
    }
    else if (znak == '*') {
        res = c1 * c2;
    }
    else if (znak == '/') {
        res = c1 / c2;
    }
    else {
        printf("Zle zadana volba\n");
        return 0;
    }

    printf("%d %c %d = %d\n", c1, znak, c2, res);

    return 0;
}
