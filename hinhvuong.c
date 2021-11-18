#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int x = c - a;
    int y = d - b;
    if (x == y)
        printf("YES\n");
    else    
        printf("NO\n");
    }
    
}