#include <stdio.h>

int main(){
    int n, r = 1;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0)
        {
            printf("0\n");
            return 0;
        }
        if(n > 0) break;
    }

    for(int i = 1; i <= n; i++)
    {
        r *= i;
    }
    printf("%d\n",r);

    return 0;
}
