#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        int n;
        scanf("%d", &n);
        int a[300];
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
        }
        int dem[300] = {0};
        for (int i = 0; i < n; i ++){
            for (int j = i + 1; j < n; j ++){
                if (a[i] == a[j]){
                    dem[i] ++;
                }
            }
        }
        // for (int i = 0; i < n; i ++){
        //     printf("%d ", dem[i]);
        // }
        int max = dem[0];
        for (int i = 0; i < n; i ++){
            if (dem[i] > max)
                max = dem[i];
        }
        for (int i = 0; i < n; i ++){
            if (dem[i] == max)
                printf("%d ", a[i]);
        }
        printf("\n");
    }
}