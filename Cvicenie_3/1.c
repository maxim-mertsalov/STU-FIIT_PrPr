#include <stdio.h>

int main(){
    int n = 0;
    int nums[n];
    int count = 0;

    // int res = scanf("%d",&n);
    if(scanf("%d",&n) != 1)
    {
        printf("Zly vstup\n");
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
        if(nums[i]>0 && nums[i]<=100)
        {
            count++;
        }
    }

    printf("%d",count);


    return 0;
}
