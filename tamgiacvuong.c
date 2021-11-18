#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j,k; long long a[5000];
    scanf("%d",&m);
    while(m--){
        int check=0;
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%lld",&a[i]);
        for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
        if(a[j]>a[i]){
        long long sw=a[i];
            a[i]=a[j];
            a[j]=sw;
                }        
        for(i=0;i<n;++i)
        for(j=i+1;j<n;++j) {
        long long h=a[i]*a[i]-a[j]*a[j];
        long long p=(long long)sqrt(a[i]*a[i]-a[j]*a[j]);
        if(p*p==h) {       
        for(k=j+1;k<n;++k) 
        if(h==a[k]*a[k]){
            ++check;
           if(check==1) printf("YES\n");
        } 
                }          
            } 
        if(check==0) printf("NO\n");    
}
   }