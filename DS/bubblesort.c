#include <stdio.h>
void main(){
    int i,j,a[50],n,t;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}