#include <stdio.h>
long long a[1000][1000];
long long fibo(int n){
    long long fibo[1000];

    fibo[1] = 0;
    fibo[2] = 1;
    for (int i = 3; i <= 1000; i ++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
}
int n, sohang, socot, vthang, vtcot, giatri, i, j;
void spiralmatrix(int n){
     sohang = n;socot = n;
     vtcot = 0;vthang = 0;
     giatri = 1;
     while (giatri <= n * n){
         for (i = vtcot; i < socot; i ++)                     a[vthang][i]    = fibo(giatri ++);
         for (i = vthang + 1; i < sohang; i ++)               a[i][socot - 1] = fibo(giatri ++);
         for (i = socot - 2; i >= vtcot; i --)                a[sohang - 1][i]= fibo(giatri ++);
         for (i = sohang - 2;i > vthang; i --)                a[i][vtcot]     = fibo(giatri ++);
         socot --;sohang --;vthang ++; vtcot ++;
     }
}
int main (){
    int n;
    scanf("%d", &n);
    spiralmatrix(n);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n;j ++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
}