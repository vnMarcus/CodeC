#include <stdio.h>
#define MAX 1000
int a[MAX];
int ckeck(int n){
    int m = 0;
    while (n > 0)
    {
        a[m] = n % 10;
        n /= 10;
        m ++;
    }
    int chan = 0, le = 0;
    for (int i = 0; i < m; i ++){
        if (a[i] % 2 == 0)
            chan ++;
        else    
            le ++;
    }
    if (chan == le)
        return 1;
    return 0;
}
int main (){
    int n;
    scanf("%d", &n);
    int dau = 1, cuoi = 10;
    while (n -- ){
        dau *= 10;
        cuoi *= 10;
    }
    int dem = 0;
    for (int i = dau / 10; i < cuoi / 10; i ++){
        if(ckeck(i)){
            printf("%d ", i);
            dem ++;
        }
        if (dem == 10){
            printf("\n");
            dem = 0;
        }
            
    }

}