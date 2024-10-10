#include <math.h>
#include <stdio.h>

void nasobok(double x, int n)
{
    double res = 0;
    for(int i = 1; i <= n; i++)
    {
        res += x;
        printf("%.2lf * %d = %.2f\n", x, i, res);
    }
}

int main(){
    int n;
    double x;

    scanf("%lf %d",&x, &n);

    nasobok(x, n);

    return 0;
}
