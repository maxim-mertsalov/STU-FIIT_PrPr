#include <stdio.h>

int main(){
    int f, g;

    scanf("%d %d", &f, &g);

    for(int i = f; i <= g; i++)
    {
        if(i % 3 == 0)
        {
            printf("%d ", i);

        }
    }



    return 0;
}
