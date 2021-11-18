#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ktra(long long n)
{
 if (n<2) return false;
 int i;
 for (i=2; i<=sqrt(n); i++)
 {
  if (n % i==0) return false;
 }
 return true;
}

int rev(long long n)
{
 int last,kq=0;
 while (n>0)
 {
  last = n % 10;
  kq = kq*10+last;
  n /= 10;
 }
 return kq;
}

void xoa(long long a[],int *n,long long vt)
{
 long long i;
 for (i=vt; i<*n; i++)
 {
  a[i] = a[i+1];
 }
 *n -= 1;
}

int main ()
{
 long long n;
 scanf("%lld",&n);
 n = rev(n);
 long long a[10000];
 long long i=0;
 while (n>0)
 {
  a[i] = n % 10;
  n /= 10;
  i++;
 }
 int k=i;
 int dem,j;
 for (i=0; i<k; i++)
 {
  dem=1;
  if (ktra(a[i])==true)
  {
   for (j=i+1; j<k; j++)
      {
      if (a[i]==a[j]) 
    {
     dem++;
     xoa(a,&k,j);
     j--;
    }
      } 
   printf("%lld %lld\n",a[i],dem);
  }
  
 }
    return 0;
}
