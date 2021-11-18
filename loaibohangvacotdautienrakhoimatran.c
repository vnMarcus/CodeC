#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k ++){
        int n, m;
    scanf("%d %d", &n, &m);
    int a[100][100];
    int b[100][100];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m;j ++){
            if (i == 0 || j == 0)
                a[i][j] = 'x';
        }
    }
    printf("Test %d:", k);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m;j ++){
            if (a[i][j] != 'x')
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    }
   
}
/* 
#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int x = 0; x < t; x ++){
        int m, n, i, j;
    int arr[100][100];
    scanf("%d%d", &n, &m);
    for ( i = 0; i < n; i ++){
        for (j = 0; j < m; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i ++){
        for (j = 1; j < m; j ++){
            arr[i][j - 1] = arr[i][j];
        }
    }
    m --;
    for (i = 1; i < n; i ++){
        for (j = 0; j < m; j ++){
            arr[i - 1][j] = arr[i][j];
        }
    }
    n --;
    printf("Test %d:\n", x + 1);
    for ( i = 0; i < n; i ++){
        for (j = 0; j < m; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    }
}
/*