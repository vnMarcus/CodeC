#include <stdio.h>
void nhap(int a[][100], int m, int n){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            scanf("%d", &a[i][j]);
        }
    }
}
int main (){
    int n, m;
    scanf("%d", &n);
    int a[100][100];
    nhap(a, n, n);
    int b[100][100];
    scanf("%d", &m);
    nhap(b, m, m);
    int h = 0, k = 0;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n;j ++){
            printf("%d ", a[i][j] * b[h][k]);
            k ++;
            if (k == m)
                k = 0;
        }
        printf("\n");
        h ++;
        if (h == m)
            h = 0;
    }

}