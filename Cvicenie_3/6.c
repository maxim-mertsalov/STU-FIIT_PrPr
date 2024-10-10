#include <math.h>
#include <stdio.h>

void mocnina(double x, int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%.2lf^%d = %.2f\n", x, i, pow(x, i));
    }
}

int main(){
    int n;
    double x;

    scanf("%lf %d",&x, &n);

    if(n < 1){
        printf("Zly vstup");
        return 0;
    }

    mocnina(x, n);

    return 0;
}
