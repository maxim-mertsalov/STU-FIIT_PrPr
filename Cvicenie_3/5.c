#include <stdio.h>

int main(){
    int n, s;

    scanf("%d",&n);

    if(n < 1 || n > 15 || n % 2 == 0){
        printf("Zly vstup");
        return 0;
    }

    s = n / 2 + 1;
    printf("%d\n",s);

    for(int i = 1; i <= n; i++)
    {
        // printf("%d ",i);
        for(int j = 1; j <= n; j++)
        {
            if(j == s || i == s)
            {
                printf("*");
            }
            else if(i == j || i == n - j+1)
            {
                printf("*");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }



    return 0;
}
