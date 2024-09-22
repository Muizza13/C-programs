#include<stdio.h>
int main(){
    int a[5]={4, 2, 1, 3, 5};
    int *p;
    int n=5;
    int k;
    p = &a;
    sort(p,n);
    for(k=0; k<n; k++){
        printf("%d", a[k]);
    }
}
void sort (int *q, int size){
    int temp;
    int i, j;
    int *r;
    r = q;
    for (i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(*q > *(q+1)){
                temp = *q;
                *q = *(q+1);
                *(q+1) = temp;
            }
            q++;
        }
        q=r;
    }
}