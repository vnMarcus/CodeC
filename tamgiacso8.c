#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
                printf("%d ", tmp + j);
        }
        else
        {
            for (int j = i; j >= 1; j--)
                printf("%d ", tmp + j);
        }
        tmp += i;
        printf("\n");
    }
}