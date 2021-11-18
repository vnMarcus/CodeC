#include<stdio.h>
#include<string.h>
void daonguoc(char s[]){
    char s1[600]; int i,j=0,n=strlen(s);
    for(i=n-1;i>=0;i--) s1[j++]=s[i];
    s1[n] = '\0';
    strcpy(s,s1);
}
void cong(char a[],char b[]){
    int i,n = strlen(a), m = strlen(b);
    daonguoc(a); daonguoc(b);
    strcat(a,"0");
    for(i=0;i<=n-m;i++) strcat(b,"0");
    int nho=0; char tong[600];
    for(i=0;i<=n;i++){
        int t = (a[i]- '0') + (b[i]- '0') + nho;
        nho = t/10; t = t%10;
        tong[i] = '0' + t;
    }
    if(tong[n]=='0')    tong[n]='\0';
    else tong[n+1]='\0';
    daonguoc(tong);
    puts(tong);
}
main(){
    int t; char a[600],b[600];
    scanf("%d",&t);
    while(t--){
        scanf("%s%s",&a,&b);
        if(strlen(a)>=strlen(b)) cong(a,b);
        else cong(b,a);
    }
}