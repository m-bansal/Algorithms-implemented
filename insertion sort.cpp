#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void is(int A[], int n){
    int Min_index, i, j;
    for(i=1; i<n; i++){
        for(j=i-1; j>=0; j--){
            if(A[j]> A[j+1])
                swap(&A[j], &A[j+1]);
            else
                break;
        }
    }
}
int main() {
	int B[] = {21, 64, 76, 12, 67, 32};
	int n = sizeof(B)/sizeof(B[0]);
	is(B, n);
	for(int i=0; i<n; i++)
	    printf("%d ", B[i]);
	return 0;
}
