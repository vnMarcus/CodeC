#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
        for (j = 0; j < n; j ++){
          printf("%d ", arr[j]);
        }
        printf("\n");
    }
}
int main (){
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    
}