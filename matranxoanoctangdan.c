#include <stdio.h>
#include <stdlib.h>
int cmp(const void *p1, const void *p2){
    return (*(int*)p1 - *(int*)p2);
}
int main (){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n * n; i ++){
        scanf("%d", &a[i]);
    }
    qsort(a, n * n, sizeof(int), cmp);

    int arr[100][100];
    int sohang = n, socot = n;
    int vthang = 0, vtcot = 0;
    int giatri = 0;
    while (giatri < n * n){
        for (int i = vthang; i < socot; i ++)       arr[vthang][i] = a[giatri ++];
        for (int i = vtcot + 1; i < sohang; i ++)   arr[i][socot - 1] = a[giatri ++];
        for (int i = socot - 2; i >= vtcot; i --)   arr[sohang - 1][i] = a[giatri ++];
        for (int i = sohang - 2; i > vthang; i --)  arr[i][vtcot] = a[giatri ++];
        sohang --;socot --;
        vtcot ++;vthang ++;
    }
    // for (int i = 0; i < n; i ++){
    //     for (int j = 0; j < n; j ++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("%d ", giatri);
}