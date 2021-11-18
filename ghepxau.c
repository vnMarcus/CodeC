#include <stdio.h>
#include <string.h>
int main (){
        int m,i,j;
    scanf("%d", &m);
    char s[200][200];
    for (i = 0; i < m; i ++)        scanf("%s", &s[i]);
    char  res1[205] = "";
    char res2[205] = "";
    for (i = 0; i < m - 1; i ++)
	{
        for (j = i+1; j < m; j ++)
		{
            strcpy(res1,s[i]);
            strcat(res1,s[j]);
            strcpy(res2,s[j]);
            strcat(res2,s[i]);
            printf("%s %s\n",res1,res2);
            if(strcmp(res1,res2)>0)
            {
                strcpy(res1,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],res1);
            }
    	}  
		for(j=0;j<m;j++) printf("%s ",s[j]);
        printf("\n\n\n");
	} 
    
    
    
}