#include <stdio.h>
#include <math.h>
int main (){
    int n, m;
    scanf("%d%d", &n, &m);
    int max = n;
    if (m > max)    max = m;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (max - j > 0)
                printf("%d", max - j);
            else  
                printf("%d", abs(max - j) + 2); 
        }
        max --;
        printf("\n");
    }
}