#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t --)
    {
        long long n;
        scanf("%lld", &n);
        int last;
        while (n > 0)
        {
            last = n % 10;
            n /= 10;
        }
        if (n % 2 == 0 && last % 2 == 0)
            printf("YES\n");
        else    
            printf("NO\n");
    }
    
}