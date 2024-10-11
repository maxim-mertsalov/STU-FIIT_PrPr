#include <stdio.h>
#include <string.h>

int main()
{
    char bufferStr[255];
    char ch;
    int countMedzier = 0;
    char isDisplay = 1;
    FILE *fl;

    fl = fopen("text.txt", "r");
    if (fl == NULL) return 0;

    while(fgets(bufferStr, 255, fl)) {
        for(int i = 0; i < strlen(bufferStr); i++)
        {
            ch = bufferStr[i];
            if(ch == ' ')
            {
                countMedzier++;
            }

            if (isDisplay == 1)
            {
                if(ch == 'x' | ch == 'X')
                {
                    printf("Precital som X\n");
                }
                else if(ch == 'y' | ch == 'Y')
                {
                    printf("Precital som Y\n");
                }
                else if(ch == '#' | ch == '$' | ch == '&')
                {
                    printf("Precital som riadiaci znak\n");
                }
                else if(ch == '*')
                {
                    printf("Koniec\n");
                    isDisplay = 0;
                }
            }

        }
    }

    printf("Pocet precitanych medzier: %d\n", countMedzier);

    fclose(fl);
    return 1;
}
