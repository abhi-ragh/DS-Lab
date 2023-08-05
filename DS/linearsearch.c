#include <stdio.h>
void main(){
    int n,a[50],key,i,flag=0;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(i==key){
            printf("Element Found At Index Position %d: ",i);
            flag=1;
        }
    }
    if(flag==0)
        printf("Element Not Found\n");
}