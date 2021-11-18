#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        int n;
        scanf("%d", &n);
        int a[100000], b[100000] ;
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
            b[i] = 1;
        }
        int count, ckeck = 0;
        for (int i = 0; i < n;i ++){
            count = 1;
            if (b[i] == 1){
                for (int j = i + 1; j < n;j ++){
                    if (a[i] == a[j]){
                        count ++;
                        b[j] == 0;
                    }
                }
            }
            if (count > 1){
                printf("%d", a[i]);
                ckeck = 1;
                break;
            }
        }
        if (ckeck ==0)
            printf("NO");
        printf("\n");
    }
}