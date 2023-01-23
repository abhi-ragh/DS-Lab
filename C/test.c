#include <stdio.h>
int FRONT=-1,REAR=-1,i,item,MAX=5,ch=0,a[50];
void enqueue(){
    if(REAR>=MAX-1)
        printf("OVERFLOW");
    else{
        if(FRONT==-1)
            FRONT=0;
        REAR++;
        printf("Enter Item: ");
        scanf("%d",&item);
        a[REAR]=item;
    }
}
void dequeue(){
    if(REAR<0)
        printf("UNDERFLOW");
    else{
        printf("-> %d",a[FRONT]);
        if(REAR==FRONT){
            REAR=-1;
            FRONT=-1;
        }
        else
            FRONT++;
    }
}
void display(){
    for(i=FRONT;i<=REAR;i++){
        printf("%d ",a[i]);
    }
}
void main(){
    while(ch!=4){
    printf("Enter Choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        enqueue();
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("Exiting");
        break;
    default:
        printf("Invalid");
        break;
    }
    }
}