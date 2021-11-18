#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int le = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j ++)
            printf("~");
        for (int j = 1; j <= le; j += 2)
        {
            printf("%d", j);
        }
        for (int j = le - 2; j >= 1; j -= 2)
            printf("%d", j);
        le += 2;
        printf("\n");
    }
}