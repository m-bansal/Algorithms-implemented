#include<bits/stdc++.h>
struct job{
    int jobid, deadline, profit;
};
bool comp(struct job a, struct job b){
    return (a.profit> b.profit);
}

void JS(job arr[], int n){
    std::sort(arr, arr+n, comp);
    int res[n];
    bool slot[n];
    for(int i = 0; i<n; i++)
        slot[i] = false;
    for(int i = 0; i<n; i++){
        for(int j=arr[i].deadline-1; j>=0; j--){
            if(slot[j]==false){
                res[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(slot[i])
            std::cout<<arr[res[i]].jobid<<" ";
    }
}
int main(){
    job arr[]={{'a',2,100},{'b',1,19},{'c',2,27},{'d',1,25},{'e',3,15}};
    int n=sizeof(arr)/sizeof(arr[0]);
    JS(arr,n);
    return 0;
}
