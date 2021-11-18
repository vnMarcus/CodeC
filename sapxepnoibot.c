#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main (){
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i ++){
        int ckeck = 0;
        for (int j = 0; j < n - i - 1; j ++){
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                ckeck = 1;
            }
        }
        if (ckeck == 0) break;
        printf("Buoc %d:\n", i + 1);
        for (int j = 0; j < n; j ++){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}