#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int m = n;
    int sum = 0,last;
    while (m > 0)
    {
        last = m % 10;
  sum += last;
        m /= 10;
    }
    int i,sum2=0,count;
    for (i=2; i<=n; i++)
    {
        count=0;
        while (n % i ==0)
        {
            count+=1;
            n/=i;
        }
        if (count != 0)
        {
         if (i<10) sum2 += i*count;
         else
         {
          int j=i;
          while (j>0)
          {
           last = j % 10;
           sum2 += last;
           j /= 10;
    }
   }
        }
    }
    if (sum==sum2) printf("YES");
    else printf("NO");
    return 0;
}