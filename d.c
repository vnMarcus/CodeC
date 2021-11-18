#include <stdio.h>
#include <math.h>
void find(int n, int h){
    for (int i = 1; i < n; i ++){
        printf("%.6f ", sqrt(i / (n*1.0)) * h);
    }
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --){
        int n, h;
        scanf("%d %d", &n, &h);
        find(n, h);
        printf("\n");
    }

}