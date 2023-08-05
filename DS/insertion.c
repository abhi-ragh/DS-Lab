#include <stdio.h>
void main(){
    int i,j,a[50],n,curr=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        j=i-1;
        curr=a[i];
        while(j>=0 && a[j]> curr){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;    
    }

    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
}