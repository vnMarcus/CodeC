#include <stdio.h>
int main (){
    long long t;
    scanf("%lld", &t);
    long long a[10000];
    for (int i = 1; i < 93; i ++){
        if (i == 1 || i == 2)
            a[i] = 1;
        else    
            a[i] = a[i - 1] + a[i - 2];
    }
    while (t --){
        int n;
        scanf("%d", &n);
        printf("%lld\n", a[n]);
    }
}