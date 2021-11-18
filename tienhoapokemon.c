#include <stdio.h>
struct pokemon {
    char name[200];
    int k, m;
    int so;
} ;
int main (){
    struct pokemon a[1000];
    int t;
    scanf("%d", &t);
    int sum = 0;
    for (int i = 1; i <= t; i ++){
        a[i].so = 0;
        scanf("%s", &a[i].name);
        scanf("%d %d", &a[i].k, &a[i].m);
        while (a[i].m >= a[i].k){
            a[i].m += 2 - a[i].k;
            a[i].so ++;
        }
    }
    int max = 0;
    for (int i = 1; i <= t; i ++){
        sum += a[i].so;
        if (a[i].so > max)
            max = a[i].so;
    }
    printf("%d\n", sum);
    for (int i = 0; i <= t; i++){
        if (a[i].so == max){
            printf("%s", a[i].name);
            break;
        }
    }


}