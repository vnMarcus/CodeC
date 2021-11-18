#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    double point1, point2, point3;
    double sum;
    int ma;
};

int main()
{
    struct student a[1000], tmp;
    int count = 1;
    int index;
    while (1)
    {
        int t;
        scanf("%d", &t);
        if (t == 1)
        {
            int n;
            scanf("%d", &n);
            printf("%d\n", n);
            scanf("\n");
            for (int i = 1; i <= n; i++)
            {
                scanf("\n");
                gets(a[i].name);
                scanf("%lf %lf %lf", &a[count].point1, &a[count].point2, &a[count].point3);
                a[count].sum = a[count].point1 + a[count].point2 + a[count].point3;
                a[count].ma = i;
                count++;
            }
            continue;
        }
        else if (t == 2)
        {
            scanf("%d", &index);
            printf("%d\n", index);
            scanf("\n");
            gets(a[index].name);
            scanf("%lf %lf %lf", &a[index].point1, &a[index].point2, &a[index].point3);
            continue;
        }
        else if (t == 3)
        {
            printf("%d %s %.1lf %.1lf %.1lf\n", index, a[index].name, a[index].point1, a[index].point2, a[index].point3);
            break;
        }
    }
}