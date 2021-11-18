#include <stdio.h>
#include <math.h>
int isPrime(long long n)
{
    if (n < 2)
        return 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
 
void solve()
{
    long long n;
    scanf("%lld", &n);
    long long ans;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (isPrime(n / i) == 1)
            {
                printf("%lld\n", n / i);
                return;
            }
            if (isPrime(i) == 1)
                ans = i;
        }
    }
    printf("%lld\n", ans);
}
 
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
}
