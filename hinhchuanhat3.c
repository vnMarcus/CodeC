#include <stdio.h>
#include <math.h>
int main (){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            int index = 1;
            if (i == j){
                printf("%d", index);
            }
            else{
                index += abs(i - j);
                printf("%d", index);
                index = 1;
            }
        }
        printf("\n");
    }
}