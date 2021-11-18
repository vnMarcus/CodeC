#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 3];
    int chan[1000], le[1000];
    int c = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[c ++] = a[i];
        else {
            le[l ++] = a[i];
        }
    }
    for (int i = 0; i < c; i ++){
        for (int j = i + 1; j < c; j ++){
            if (chan[i] >= chan[j]){
                int t = chan[i];
                chan[i] = chan[j];
                chan[j] = t;
            }
        }
    }
    for (int i = 0; i < c; i ++){
        printf("%d ", chan[i]);
    }
    for (int i = 0; i < l; i ++){
        for (int j = i + 1; j < l; j ++){
            if (le[i] < le[j]){
                int t = le[i];
                le[i] = le[j];
                le[j] = t;
            }
        }
    }
    for (int i = 0; i < l; i ++){
        printf("%d ", le[i]);
    }
    printf("\n");
    int n1 = 0, n2 = 0;
    for (int i = 0; i < n; i ++){
        if (a[i] % 2 == 0)
            a[i] = chan[n1 ++];
        else
            a[i] = le[n2 ++];
    }
    for (int i = 0; i < n; i ++){
        printf("%d ", a[i]);
    }

    
    
}