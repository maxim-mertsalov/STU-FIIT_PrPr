#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    FILE *fptr;

    fptr = fopen("nasobky.txt", "w");
    if(fptr == NULL) return 0;

    for (int i = 1; i < 10; i++)
    {
        fprintf(fptr, "%d * %.2f = %.2f\n", i, x, x * i);
    }
    
    fclose(fptr);

    return 0;
}
