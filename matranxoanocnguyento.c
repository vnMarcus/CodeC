#include <stdio.h>
#include <stdbool.h>
    int a[1000][1000];
    int n, i, j, d, hang, cot, gt;
int nguyento(int k){
	int N = 3000;
	bool check[N + 1];
	for (int i = 2; i <= N; i++) {
		check[i] = true;
	}
	for (int i = 2; i <= N; i++) {
		if (check[i] == true) {
		for (int j = 2 * i; j <= N; j += i) {
			check[j] = false;
		}
		}
	}
	int prime[500], n1 = 1;
	for (int i = 2; i <= N; i++) {
		if (check[i] == true) {
			prime[n1 ++] = i;
		}
	}
	return prime[k];
}
void tao(){
    d = 0; 
    gt = 1; hang = n - 1; cot = n - 1;
    while (d <= n / 2)
    {
        for (i = d; i <= cot; i ++)             a[d][i] = nguyento(gt ++);
        for (i = d + 1; i <= hang; i ++)        a[i][cot] = nguyento(gt ++);
        for (i = cot - 1; i >= d; i --)         a[hang][i] = nguyento(gt ++);
        for (i = hang - 1; i > d; i --)         a[i][d] = nguyento(gt ++);      
        d ++; hang --; cot --;
    }
    
    
}
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 1; x <= t; x ++){
        scanf("%d", &n);
		tao();
		printf("Test %d:\n", x);
		for (i = 0; i < n; i ++){
			for (j = 0; j < n; j ++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
    }
}