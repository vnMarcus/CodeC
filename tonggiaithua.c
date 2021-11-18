#include <stdio.h>
int main (){
    long long n;
    scanf("%lld", &n);
    long long index = 1;
    long long sum = 0;
    for (long long i = 1; i <= n; i ++){
        index *= i;
        sum += index;
    }
    printf("%lld", sum);
}
