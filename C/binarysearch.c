#include <stdio.h>
void main(){
    int len,a[50],key,i,mid,l=0,h,flag=0;
    printf("Enter Array Size: ");
    scanf("%d",&len);
    h=len;
    for(i=0;i<len;i++){
        printf("Enter Array Element %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter Element To Search: ");
    scanf("%d",&key);

    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){
            printf("Element Found at Position %d\n",mid);
            flag=1;
            break;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else if(key<a[mid]){
            h=mid-1;
        }
    }
    if(flag==0){
        printf("Element NOt Found\n");
    }
}