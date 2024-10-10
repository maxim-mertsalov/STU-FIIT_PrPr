#include <stdio.h>

int main(){
    int n;

    scanf("%d",&n);

    if(n < 1 || n > 15){
        printf("Cislo nie je z daneho intervalu");
        return 0;
    }

    for(int i = n; i >= 1; i--)
    {
        printf("%d: ",n-i+1);
        for(int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }



    return 0;
}
