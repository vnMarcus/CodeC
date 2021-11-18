#include <stdio.h>
struct diem
{
    int x;
    int y;
};
int main()
{
    struct diem a[1000], tmp;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++){
        scanf("%d%d", &a[i].x, &a[i].y);
    }
    for (int i = 0; i < n ; i ++){
        for (int j = 0;j < n;j ++){
            if (a[i].x <= a[j].x){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    int max = a[0].x;
    for (int i = 0; i < n;i ++){
        if (max + a[i].y > a[i + 1].x )
            max = max + a[i].y;
        else
            max = a[i + 1].x;
    }
    printf("%d", max);
}