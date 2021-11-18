#include <stdio.h>
#include <math.h>
int pow1(int a, int b)
{
    a = 10;
    while (b-- > 1)
    {
        a *= 10;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    int m = n, dem = 0, last;
    while (m > 10)
    {
        dem++;
        last = m % 10;
        if (last >= 5)
        {
            n /= pow1(10, dem);
            m = n + 1;
            n = (n + 1) * pow1(10, dem);
        }
        else
        {
            n /= pow1(10, dem);
            m = n;
            n *= pow1(10, dem);
        }
    }
    printf("%d", n);
    return 0;
}