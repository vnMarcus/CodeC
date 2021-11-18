#include <stdio.h>
int n, m, sohang, socot, vthang, vtcot, giatri, i, j, a[1000][1000];
int arr[100];
int b[100];
void spiralmatrix(){
    sohang = n;socot = m;
    vtcot = 0;vthang = 0;
    giatri = 0;
    while (giatri < n * m){
        for (i = vtcot; i < socot; i ++){
            b[giatri ++] = a[vthang][i];
        }
        for (i = vthang + 1; i < sohang; i ++){
            b[giatri ++] = a[i][socot - 1];
         }
         for (i = socot - 2; i >= vtcot; i --){
            b[giatri ++] = a[sohang - 1][i];
         }
         for (i = sohang - 2;i > vthang; i --){
            b[giatri ++] = a[i][vtcot];
         }
         socot --;sohang --;vthang ++; vtcot ++;
     }
     for (int i = 0; i < giatri; i ++){
         printf("%d ", b[i]);
     }
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        scanf("%d%d", &n, &m);
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j ++){
                scanf("%d", &a[i][j]);
            }
        }
        spiralmatrix();
        printf("\n");
    }
}