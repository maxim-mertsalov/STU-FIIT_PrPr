#include <stdio.h>

int main() {
    int c1, c2;
    int res;
    char znak;

    scanf("%d %d %c", &c1, &c2, &znak);

    switch (znak) {
        case '+': res = c1 + c2; break;
        case '-': res = c1 - c2; break;
        case '*': res = c1 * c2; break;
        case '/': res = c1 / c2; break;
        default: printf("Zle zadana volba\n"); return 0;
    }

    printf("%d %c %d = %d\n", c1, znak, c2, res);

    return 0;
}
