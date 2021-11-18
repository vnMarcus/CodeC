#include <stdio.h>
int ucln(int a,int b){
    if (a == 0 || b == 0)
        return a + b;
    while (a != b){
        if (a > b)
            a -= b;
        else    
            b -= a;
    }
    return a;
}
int main (){
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int x = ucln(a, b);
        int y = ucln(c, d);
        if (x == y)
            printf("YES\n");
        else
            printf("NO\n");
    }
    


}