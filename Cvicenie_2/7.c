#include <stdio.h>

int main() {
    int a, b, c, d, e; // 6 2 2 4 5

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d\n", e / --a * b++ / c++);
    // 5 / 5 * 3 / 3 = 1

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("%d\n", a %= b = d = 1 + e / 2);
    // a = 6 % 2 = d = 1 + 5 / 2
    // vsetky prikazy idu z prava na levo -> najprv ze d = 3, potom a = 0 a d = 0

    return 0;
}