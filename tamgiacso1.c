#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int tmp = 1;
    for (int i = 0; i < n; i ++){
        for (int j = 1; j <= tmp; j ++ )
            printf("%d", j);
        printf("\n");
        tmp += 2;
    }
}