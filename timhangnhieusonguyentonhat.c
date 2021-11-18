#include <stdio.h>
#include <math.h> 
int isPrime(int n)
{
	int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); i ++)
	{
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main (){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
    int max = 0, count, index;
    for (int i = 0; i < n; i ++){
        count = 0;
        for (int j = 0; j < n; j ++){
            if (isPrime(a[i][j])){ 
                count ++;
            }
            if (count > max){
                max = count;
                index = i + 1;
            }
        }
    }
    printf("%d\n", index);
    for (int i = 0; i < n; i ++)
        if(isPrime(a[index - 1][i]))    printf("%d ", a[index - 1][i]);

}
/*
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); i ++)
	{
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void findmax(int a[],int n,int *vtmax)
{
	int max = a[0];
	*vtmax = 0;
	int i;
	for (i=1; i<n; i++)
	{
		if (a[i]>max) 
		{
			max = a[i];
			*vtmax = i;
		}
	}
}

int main ()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n];
    int i=0,j=0;
    for (i=0; i<n; i++)
    {
    	for (j=0; j<n; j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	int tg,dem;
	for (i=0; i<n; i++)
	{
		dem = 0;
		for (j = 0; j < n; j++)
		{
			if (isPrime(a[i][j])==1) 
                dem++;
		}
		b[i] = dem;
	}
	int vtmax;
	findmax(b,n,&vtmax);
	printf("%d\n",vtmax+1);
	for (i=0; i<n; i++)
	{
		if (isPrime(a[vtmax][i])==1) printf("%d ",a[vtmax][i]);
	}
    return 0;
}
*/