#include <stdio.h>
int main (){
    long long t;
    scanf("%lld", &t);
    while (t --){
        int n;
        long long a[10000];
        int count = 1;
        scanf("%d", &n);
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
        }
        long long max = a[0];
        for (int i = 1; i < n; i ++){
            if (a[i] >= max){
                count ++;
                max = a[i];
            }
        }
        printf("%d", count);
        printf("\n");
    }
}