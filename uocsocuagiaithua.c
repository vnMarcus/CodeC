#include<stdio.h>
#include<math.h>
int main(){
	int t,a,i,d,n,p,count;
	scanf("%d",&t);
	while (t--){
		count=0;
		scanf("%d%d", &n, &p);
				for (i = p; i <= n;i += p){
					d = i;
					while (d % p == 0){
						d = d/p;
						count++;
					}
				}
				printf("%d\n",count);			
	}
}