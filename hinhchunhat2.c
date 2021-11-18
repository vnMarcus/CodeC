#include <stdio.h>
int main (){
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i ++){
		int tmp = 0;
		for (int j = 0; j < m; j ++){
			if (i + j < m){
				tmp ++;
				printf("%d", i + j);
			}
			else {
				printf("%d", i + (tmp --));
			}
		}
		printf("\n");
	}
}