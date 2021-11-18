#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void nhap(int a[][100], int m, int n){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            scanf("%d", &a[i][j]);
        }
    }
}
void hienthi(int a[][100], int m, int n){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void process(int a[][100], int m, int n){
    for (int i1 = 0; i1 < m; i1 ++){
        for (int j1 = 0; j1 < n; j1 ++){
            for (int i2 = i1; i2 < m; i2 ++){
                for (int j2= j1; j2 <n; j2 ++){
                    if (a[i1][j1] > a[i2][j2]){
                        swap(&a[i1][j1], &a[i2][j2]);
                    }
                }
            }
        }
    }

}
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        int m, n;
        scanf("%d%d", &m, &n);
        int a[100][100];
        nhap(a, m, n);
        process(a, m, n);
        printf("Test %d:\n", x);
        hienthi(a, m, n);
    }
}