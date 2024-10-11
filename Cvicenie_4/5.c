#include <stdio.h>

int main()
{
    char ch;

    char bufferStr[255];
    FILE *f_cp;
    FILE *f_pst;

    f_cp = fopen("znak.txt", "r");
    // fgets(bufferStr, 255, f_cp);


    if (f_cp == NULL) return 0;

    scanf("%c", &ch);

    if (ch == 's')
    {
        f_pst = fopen("novy.txt", "w");
        if (f_pst == NULL) return 0;

        while(fgets(bufferStr, 255, f_cp)) {
            fprintf(f_pst, "%s", bufferStr);
        }
        fclose(f_pst);
    }
    else
    {
        while(fgets(bufferStr, 255, f_cp)) {
            printf("%s", bufferStr);
        }
        printf("\n");
    }

    fclose(f_cp);

    return 1;
}
