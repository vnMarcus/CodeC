#include <stdio.h>
int main (){
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[1000], b[1000], c[1000];
    for (int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < m; j ++){
        scanf("%d", &b[j]);
    }
    for (int i = 0; i < k; i ++){
        scanf("%d", &c[i]);
    }
    int i = 0, j = 0, n1 = 0, d[1000];
    while (i < n && j < m){
        while (a[i] < b[j] && i < n)    i ++;
        while (a[i] > b[j] && j < m)    j ++;
        if (a[i] == b[j]){
            d[n1 ++] = a[i];
            i ++;
            j ++;
        }     
    }
    for (int i = 0; i < n1; i ++)
        printf("%d ", d[i]);
}