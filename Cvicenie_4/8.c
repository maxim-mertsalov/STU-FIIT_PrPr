#include <stdio.h>
#include <string.h>

char contains(char s[], char c)
{
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == c) return 1;
    }
    return 0;
}

int main()
{
    char samohlasky_ret[] = "aeiouAEUOU";
    char spoluhlasky_ret[] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
    char cislice_ret[] = "0123456789";

    FILE *f_vst;

    f_vst = fopen("vstup.txt", "r");
    if(f_vst == NULL) return 0;

    char f_data;

    int samohlasok = 0, spoluhlasky = 0, cislic = 0;

    while((f_data = getc(f_vst)) != EOF)
    {
        if(contains(samohlasky_ret, f_data))
        {
            samohlasok++;
        }
        else if(contains(spoluhlasky_ret, f_data))
        {
            spoluhlasky++;
        }
        else if(contains(cislice_ret, f_data))
        {
            cislic++;
        }
    }

    printf("Pocet samohlasok: %d, pocet hlasok: %d, pocet cislic %d.\n", samohlasok, spoluhlasky, cislic);
    fclose(f_vst);
    return 1;
}

