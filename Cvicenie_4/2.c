#include <stdio.h>

double tyzdenna_mzda(double h_mzda, double hod)
{
    double t_mzda = 0;
    if (hod <= 40)
    {
        t_mzda = h_mzda * hod;
    }
    else if (hod <= 60)
    {
        t_mzda = (h_mzda * 40) + (h_mzda * (hod - 40) * 1.5);
    }
    else if (hod >= 60)
    {
        t_mzda = (h_mzda * 40) + (h_mzda * (20) * 1.5) + (h_mzda * (hod - 60) * 2);
    }
    printf("Hod. mzda: %.2lf Euro/hod, hodin: %.2lf, spolu: %.2lf Euro\n", h_mzda, hod, t_mzda);

    return t_mzda;
}

int main()
{
    int n;
    scanf("%d",&n);
    double h_mzda, hod, celkom = 0.0;

    for(int i = 1; i <= n; i++)
    {
        scanf("%lf %lf",&h_mzda, &hod);
        celkom += tyzdenna_mzda(h_mzda, hod);
    }

    printf("Celkova mzda: %.2lf Euro\n", celkom);

    return 0;
}
