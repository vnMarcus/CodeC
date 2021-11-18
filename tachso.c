#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[300];
    gets(s);
    int count = 0,i;
    char s1[200] = {}, s2[200] = {};
    int dem=0;
    while (strlen(s) != 1)
    {
    	int n = strlen(s);
        for (i=0; i<n/2; i++)
        {
        	s1[i] = s[i];
		}
		s1[i] = '\0';
		for (i=n/2; i<n; i++)
		{
			s2[i-n/2] = s[i];
		}
		s2[i-n/2] = '\0';
		int num = atoi(s1) + atoi(s2);
		itoa(num,s,10);
		printf("%d\n",num);
    }
}