#include <stdio.h>
void swap(int *x, int *y){
    int z = *x;
    *x = *y;
    *y = z;
}
int main (){
    int m;
    scanf("%d", &m);
    int arr[100][100];
    for (int i = 0; i < m;i ++){
        for(int j = 0; j < m; j ++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i ++){
        swap(&arr[i][i], &arr[i][m - i - 1]);
    }
    for (int i = 0; i < m; i ++){
        for (int j = 0;j < m; j ++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}