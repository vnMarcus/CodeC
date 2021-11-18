#include <stdio.h>
int main (){
    int n, m;
    scanf("%d%d", &n, &m);
    int max = n;
    if (m > max)
        max = m;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            if (j < i)
                printf("%c ", max - j - 1 + 'a');
            else
                printf("%c ", max - i - 1 + 'a');
        }
        printf("\n");
    }
}