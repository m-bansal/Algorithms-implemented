#include<bits/stdc++.h>
int max(int a, int b){
    return a>b ? a : b;
}
int lcs(char *x, char *y, int m, int n){
    if(m==0 || n==0)
        return 0;
    if(x[m-1] == y[n-1])
        return (1+(lcs(x,y,m-1,n-1)));
    else
        return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
}
int main(){
    int len;
    char *x = (char *)"Hello";
    char*y = (char *)"Hell";
    len = lcs(x,y,strlen(x), strlen(y));
    std::cout<<len;
    return 0;
}
