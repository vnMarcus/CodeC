#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () 
{
	int t;
    scanf("%d\n", &t);
    while (t --)
    {
        char s[20];
	scanf("%s",&s);
	int len=strlen(s);
	int i;
	if ((s[0]-'0') / (s[len-1]-'0') != 2 && (s[len-1]-'0') / (s[0]-'0') != 2)
	{
		printf("NO");
		exit(0);
	}
	int kt=1;
	for (i=1; i<len/2-1; i++)
	{
		if (s[i] != s[len-i-1]) kt=0;
	}
	if (kt==1) printf("YES\n");
	else printf("NO\n");
    }
    
	return 0;
}
