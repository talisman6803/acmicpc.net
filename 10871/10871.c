#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int i, n, x;
    scanf("%d %d\n", &n, &x);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<=n-1;i++){
        scanf("%d ", &arr[i]);
    }
    for(i=0;i<=n-1;i++){
        if(arr[i]<x){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}