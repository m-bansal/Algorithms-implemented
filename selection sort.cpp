#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
//moving boundary of unsorted subarray one by one
void ss(int A[], int n){
    int Min_index, i, j;
    for(i=0; i<n-1; i++){
	//finding the minimum element in unsorted array
        Min_index = i;
        for(j=i+1; j<n; j++){
            if(A[j]< A[Min_index])
                Min_index=j;
            swap(&A[i], &A[Min_index]);//swapping the found minimum element with the first element
        }
    }
}
int main() {
	int B[] = {21, 64, 76, 12, 67, 32};
	int n = sizeof(B)/sizeof(B[0]);
	ss(B, n);
	//print array
	for(int i=0; i<n; i++)
	    printf("%d ", B[i]);
	return 0;
}
