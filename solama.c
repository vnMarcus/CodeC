#include <string.h>
#include <stdio.h>
int So[] = {1, 5, 10, 50, 100, 500, 1000};
char LM[] = "IVXLCDM";
int tim(char c){
    for (int i = 0; i < 7; i ++)            if (LM[i] == c)         return i;
}
int tinh(char *s){
    int n = strlen(s);
    int vt = tim(s[n - 1]);
    int kq = So[vt];
    for (int i = n - 1; i > 0; i --){
        int sau = tim(s[i]);
        int truoc = tim(s[i - 1]);
        if (So[truoc] >= So[sau])       kq += So[truoc];
        else                            kq -= So[truoc];
    }
    return kq;
}
int main (){
    char s[100];
    scanf("%s", s);
    printf("%d", tinh(s));
}