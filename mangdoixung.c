#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        int n;
        scanf("%d", &n);
        int a[1000];
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
        }
        int ckeck = 1;
        for (int i = 0; i < n / 2; i ++){
            if (a[i] != a[n - i - 1])
                ckeck = 0;
        }
        if (ckeck == 1)
            printf("YES");
        else
            printf("NO");
            printf("\n");
    }
}