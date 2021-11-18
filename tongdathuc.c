#include <stdio.h>
int abcd(int x[]){
    int s,m;
    while (1) {
            char c;
            scanf("%d*x^%d",&s,&m);
            x[m] += s;
            c = getchar();
            if(c == '\n') break;
            scanf("+");
        }
}
int main () {
    int n;
    scanf("%d",&n);
    while (n--) {
        int x[10009]={},z=10000;
        abcd(x);
        abcd(x);
        while (x[z--]==0);
        printf("\n%d*x^%d",x[z+1],z+1);
        for (int i=z;i>=0;i--) if (x[i]>0) printf(" + %d*x^%d",x[i],i);
    }
    
}