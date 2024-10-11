#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char f_1_c;
    char f_2_c;

    char f_1_s[255];

    int i = 0, j = 0, countRoznych = 0;

    FILE *f_1;
    FILE *f_2;

    f_1 = fopen("prvy.txt", "r");
    f_2 = fopen("druhy.txt", "r");

    if (f_1 == NULL || f_2 == NULL) return 0;

    while((f_1_c = getc(f_1)) != EOF)
    {
        f_1_s[i] = f_1_c;
        i++;
    }

    while((f_2_c = getc(f_2)) != EOF)
    {
        if(f_1_s[j] != f_2_c && strlen(f_1_s) > j)
        {
            countRoznych++;
        }
        j++;
    }

    if(countRoznych == 0)
    {
        printf("Subory su identicke");
        return 1;
    }

    printf("Pocet roznych znakov: %d \nJeden zo suborov je dlhsi o %d znakov\n", countRoznych, abs(i - j));
    fclose(f_1);
    fclose(f_2);
    return 1;
}
