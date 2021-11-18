#include <stdio.h>
#include <math.h>
int ckeck(long long n){
	int count = 0;
	for (long long i; i <= sqrt(n); i ++){
		if (n % i == 0)
			count ++;
	}
	return count;
}
int main (){
	long long n;
	scanf("%lld", &n);
	printf("%d", ckeck(n));
}