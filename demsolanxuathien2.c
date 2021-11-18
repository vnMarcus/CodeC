#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        int n;
        scanf("%d", &n);
        int a[200], b[200];
        for (int i = 0; i < n; i ++){
            scanf("%d", &a[i]);
            b[i] = 1;
        }
        int count;
        printf("Test %d:\n", x);
        for (int i = 0; i < n; i ++){
            if (b[i] == 1){
                count = 1;
                for (int j = i + 1; j < n; j ++){
                    if (a[i] == a[j]){
                        count ++;
                        b[j] = 0;
                    }
                }
                printf("%d xuat hien %d lan\n", a[i], count);
            }
        }
    }
}