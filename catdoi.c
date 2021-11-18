#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long n;
		scanf("%lld",&n);
		int a[100];
		int dem = 0;
		int ckeck = 1; 
		while(n > 0)
		{
			int  z = n % 10;
			if(z ==0 || z == 1 || z == 9 || z == 8)
			{
				if( z == 9 || z == 8)
				{
				    z=0;
				}
				    a[dem]=z;
				    dem++;
			}
			else 
			{
				ckeck = 0;
				break;
			}
			n /= 10;	
		}
		if( ckeck == 0)
		{
			printf("INVALID\n"); 
		} 
		 else
		{
		for(int i = dem - 1; i >= 0; i --)
		{
			if(a[i] == 0)
			{
				dem--; 
			}
			 else
			{
			 	break; 
			} 
		}
		for(int i = dem - 1; i >= 0 ; i--)
		{
			printf("%d",a[i]); 
		 } 
		printf("\n");
		}
	}
}