#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    int minUp = 50005;
    int minDown = 50005;
    int sumU = 0;
    int sumD = 0;
    for (int i = 1; i <= n; i ++){
        int a, b;
        scanf("%d%d", &a, &b);
        sumU += a;
        sumD += b;
        if (a < minUp) minUp = a;
        if (b < minDown) minDown = b;
    }
    sumU += minDown;
    sumD += minUp;
    if (sumD > sumU)    printf("%d", sumD);
    else                printf("%d", sumU);
}