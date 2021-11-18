#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int le = 1, chan = 4;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= le; j += 2)
            {
                printf("%d", j);
            }
            le += 4;
        }
        else
        {
            for (int j = 2; j <= chan; j += 2)
            {
                printf("%d", j);
            }
            chan += 4;
        }
        printf("\n");
    }
}