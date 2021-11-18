#include <stdio.h>
int checkm(int a[20][20], int m, int n)
{
    int i;
    for (i = 1; i <= m; i++)
        if (a[n][i] == 1)
            return 0;
    return 1;
}
int checkn(int a[20][20], int n, int m)
{
    int i;
    for (i = 1; i <= n; i++)
        if (a[i][m] == 1)
            return 0;
    return 1;
}
void swap(int a[20][20], int m, int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (a[i][j] == 1)
                a[i][j] = 0;
            else
                a[i][j] = 1;
}
int main()
{
    int n, m, dem = 0, i, j, a[20][20];
    char s[30];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &s);
        for (j = 0; j < n; j++)
            a[i][j + 1] = s[j] - '0';
    }
    m = n;
    while (m > 0 && n > 0)
    {
        while (checkm(a, m, n) && m > 0)
            m--;
        while (checkn(a, n, m) && n > 0)
            n--;
        swap(a, m, n);
        dem++;
    }
    printf("%d", dem);
}