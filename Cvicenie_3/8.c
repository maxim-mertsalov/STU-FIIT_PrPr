#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0.0;
    float num = 0.0;

    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("cisla.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return -1;
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        // printf("Retrieved line of length %zu:\n", read);
        sscanf(line, "%f", &num);
        sum += num;
        printf("%s", line);
    }

    fclose(fp);
    printf("\nSucet cisel je: %.2f\n", sum);
    if (line)
        free(line);

    return 0;
}