#include <stdio.h>
int n, sohang, socot, vthang, vtcot, giatri, i, j, a[1000][1000];
void spiralmatrix(){
     sohang = n;socot = n;
     vtcot = 0;vthang = 0;
     giatri = 1;
     while (giatri <= n * n){
         for (i = vtcot; i < socot; i ++)                     a[vthang][i]    = giatri ++;
         for (i = vthang + 1; i < sohang; i ++)               a[i][socot - 1] = giatri ++;
         for (i = socot - 2; i >= vtcot; i --)                a[sohang - 1][i]= giatri ++;
         for (i = sohang - 2;i > vthang; i --)                a[i][vtcot]     = giatri ++;
         socot --;sohang --;vthang ++; vtcot ++;
     }
}
int main (){
    scanf("%d", &n);
    spiralmatrix();
    for (i = 0; i < n; i ++){
        for (j = 0; j < n; j ++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}