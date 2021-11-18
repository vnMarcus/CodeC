#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t --){
        int a; int count;
        scanf("%d",&a);
        int i;
        printf("%d = ",a);
        for (i=2; i<=a; i++)
        {
            count=0;
            while (a % i ==0)
            {
                count+=1;
                a/=i;
            }
            if (count != 0)
            {
            	printf("%d^%d",i,count);
            	if (a>i) printf(" * ");
            }
        }
    printf("\n");
    }
}
