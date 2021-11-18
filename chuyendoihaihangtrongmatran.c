#include <stdio.h>
int main (){
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[100][100];
    for (int i = 0; i < m;i ++){
        for(int j = 0; j < n; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < m;i ++){
        for(int j = 0; j < n; j ++){
            if (i == a - 1){
                printf("%d ", arr[b - 1][j]);
            }
            else if (i == b - 1)
                printf("%d ", arr[a - 1][j]);
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
/*
#include <stdio.h>
void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}
int main (){
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[100][100];
    for (int i = 0; i < m;i ++){
        for(int j = 0; j < n; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
        for (int j = 0; j < n; j ++){
            swap(&arr[a - 1][j], &arr[b - 1][j]);
        }
    
    for (int i = 0; i < m; i ++){
        for (int j = 0;j < n; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
*/