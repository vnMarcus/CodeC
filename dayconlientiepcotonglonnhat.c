#include <stdio.h> 
long long max(long long  a,long long  b) {
	if(a > b) return a;
	return b; 
}
int main () {
	long long   a[100000]={0};
	long n;
	int t; 
	scanf("%d", &t);
	while(t --) {
	scanf("%ld",&n);
	for(int i = 0; i < n;i++) {
		scanf("%lld",&a[i]);
	}
	long long  max1 = -9999999,t=0;
	for(long  i=0;i<n;i++) {
		t=max(a[i],t+a[i]); 
		max1=max(max1,t); }
	printf("%lld\n",max1);
}
return 0;
}