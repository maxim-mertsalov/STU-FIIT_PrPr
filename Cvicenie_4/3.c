#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long reverzne_cislo(long x)
{
    char str[20];
    char r_str[20];
    char* endptr;

    sprintf(str, "%ld", x);

    for (int i = 0; i <= strlen(str); i++)
    {
        r_str[i] = str[strlen(str) - i - 1];
    }

    return strtol(r_str, &endptr, 10);
}

int main()
{
    long x;

    scanf("%ld", &x);

    long res = reverzne_cislo(x);

    printf("%ld\n", res);
    if (res == x) printf("Cislo %ld je palindrom\n", x);
    else printf("Cislo %ld nie je palindrom\n", x);

    return 0;
}
