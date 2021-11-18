#include <stdio.h>
void in(int *a, int st, int en){
    for (int i = st; i <= en; i ++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main (){
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k ++){
    int n;
    scanf("%d", &n);
    int a[300];
    for (int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }
    int start[300], end[300];
    int j = 0;
    start[j] = 0;
    for (int i = 0; i < n; i ++){
        if (a[i] >= a[i + 1] || i == n - 1){
            end[j ++] = i;
            start[j] = i + 1;
        }
    }
    int max = end[0] - start[0] + 1;
    for (int i = 1; i < j; i ++){
        int len = end[i] - start[i] + 1;
        if (len > max)
            max = len;
    }
    printf("Test %d:\n", k);
    printf("%d\n", max);
    for (int i = 0; i < j; i ++){
        int  len = end[i] - start[i] + 1;
        if (len == max){
            in(a, start[i], end[i]);
        }
    }
    }
}