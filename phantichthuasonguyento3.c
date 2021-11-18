#include <stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    for (int x = 1; x <= t; x ++){
        int n, count;
        scanf("%d", &n);
        printf("Test %d: ", x);
        for (int i = 2; i <= n; i ++)
        {
            count = 0;
            while (n % i == 0)
            {
                count += 1;
                n /= i;
            }
            if (count > 0)
                printf("%d(%d) ", i, count);
        }    
        printf("\n");
    }
   
}