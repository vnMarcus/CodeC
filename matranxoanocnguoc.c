#include <stdio.h>
    int a[1000][1000];
    int n, i, j, d, hang, cot, gt;
void tao(){
    d = 0; 
    gt = n * n; hang = n - 1; cot = n - 1;
    while (d <= n / 2)
    {
        for (i = d; i <= cot; i ++)             a[d][i] = gt --;
        for (i = d + 1; i <= hang; i ++)        a[i][cot] = gt --;
        for (i = cot - 1; i >= d; i --)         a[hang][i] = gt --;
        for (i = hang - 1; i > d; i --)         a[i][d] = gt --;      
        d ++; hang --; cot --;
    }
    
    
}
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        scanf("%d", &n);
    tao();
    printf("Test %d:\n", x);
    for (i = 0; i < n; i ++){
        for (j = 0; j < n; j ++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
}