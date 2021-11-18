#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        int n;
    scanf("%d", &n);
    int a[50][50];
    for (int i = 0; i < n;i ++){
        for (int j = 0; j < n;j  ++){
            if (i < j )
                a[i][j] = 0;
            else 
                a[i][j] = j + 1;
        }
    }
    int k, tg;
    printf("Test %d:\n", x);
    for (int i = 0; i < n;i ++){
        for (int j = 0; j < n; j ++){
            tg = 0;
            for (k = 0; k < n; k ++){

                tg += a[i][k] * a[j][k]; 
            }
            printf("%d ", tg);
        }
        printf("\n");
    }
    
    }
}