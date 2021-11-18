#include <stdio.h>
struct mathang
{
    char ten[200];
    char nhom[200];
    int ma;
    double lai;
};

int main (){
    int n;
    scanf("%d", &n);
    scanf("\n");
    struct mathang a[n + 3], tmp;
    for (int i = 1; i <= n; i ++){
        scanf("\n");
        gets(a[i].ten);
        scanf("\n");
        gets(a[i].nhom);
        double giamua, giaban;
        scanf("%lf", &giamua);
        scanf("%lf", &giaban);
        double money = giaban - giamua;
        a[i].lai = money;
        a[i].ma = i;
    }
    for (int i = 1; i < n; i ++){
        for (int j = i + 1;j <= n; j ++){
            if (a[i].lai < a[j].lai){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1 ;i <= n; i++) {
		printf("%d %s %s %.2lf\n",a[i].ma,a[i].ten,a[i].nhom,a[i].lai);
	}


}