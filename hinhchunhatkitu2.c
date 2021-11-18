#include <stdio.h>
#include <math.h>
int main (){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (m > i + j)
                printf("%c ", i + j  + 'A');
            else
                printf("%c ", abs(m - i - j) + 'A');
        }
        printf("\n");
    }
}