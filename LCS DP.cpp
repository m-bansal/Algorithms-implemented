#include<bits/stdc++.h>
int max(int a, int b){
    return a>b ? a : b;
}
int lcs(char *x, char *y, int m, int n){
    int i,j;
    int l[m+1][n+1];
    for(i=0; i<=m; i++)
        l[i][0]=0;
    for(i=0; i<=n; i++)
        l[0][i]=0;
    for(i=1; i<=m; i++){
        for(j=1; j<=n; j++){
            if(x[i-1] == y[j-1])
                l[i][j] = 1+ l[i-1][j-1];
            else
                l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    return l[m][n];
}
int main(){
    int len;
    char *x = (char *)"Hello";
    char*y = (char *)"Hell";
    len = lcs(x,y,strlen(x), strlen(y));
    std::cout<<len;
    return 0;
}
