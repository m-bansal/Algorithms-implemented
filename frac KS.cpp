#include<bits/stdc++.h>
struct item {
    int profit, weight;
};
bool comp (struct item a, struct item b){
    double r1 = a.profit/a.weight;
    double r2 = b.profit/b.weight;
    return r1>r2;
}
double fracKS(int M, item arr[], int n){
    std::sort(arr, arr+n, comp);
    int cur_wt = 0;
    double final_profit = 0.0;
    for(int i=0; i<n; i++){
        if(cur_wt + arr[i].weight <= M){
            cur_wt += arr[i].weight;
            final_profit += arr[i].profit;
        }else{
            int remain = M - cur_wt;
            final_profit += arr[i].profit*((double)remain/(double)arr[i].weight);
            break;
        }
    return final_profit;
    }
}
int main(){
    int n, M=50;
    item arr[] = { {60, 10} , {100, 20} , {120, 30} };
    n=sizeof(arr)/sizeof(arr[0]);
    std::cout<<fracKS(M, arr, n);
    return 0;
}
