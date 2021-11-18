#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int dem = 1, tmp = 0;
    for (int i = 1; i <= n; i ++){
        
        printf("%d ", dem);
        tmp = dem;
        for (int j = 1;j < i; j ++){
            tmp +=  n - j; 
            printf("%d ", tmp);
        }
        dem ++;
        printf("\n");
    }
}