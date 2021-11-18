#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d", &n, &m);
	for ( int i = 0;i <= n - 1;i++){
        printf("%d", i + 1);	
        for (int j = 2; j <= m; j ++){
            if (m >= i + j)
                printf("%d", i + j);
            else 
                printf("%d", m - j + 1);    
        }
        printf("\n");
    }
}