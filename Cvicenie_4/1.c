#include <stdio.h>

int zisti_prvocislo(int cislo)
{
    int count_del = 0;

    if (cislo <= 1) return -1;

    for (int i = 1; i <= cislo; i++)
    {
        if (cislo % i == 0)
        {
            count_del++;
        }
    }
    if (count_del <= 2) return 1;
    else return -1;
}

int main()
{
    int a, b;
    int count = 0;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i <= b; i++)
    {
        if (zisti_prvocislo(i) == 1)
        {
            count++;
            printf("%d \n", i);
        }
    }
    if (count == 0)
    {
        printf("Prvocislo neexistuje");
    }

    return 0;
}
