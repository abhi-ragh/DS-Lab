#include <stdio.h>
int n,a[10],FRONT=-1,REAR=-1,i,ch=0,MAX=5,item;
void enqueue(){
    if((REAR+1)%MAX == FRONT)
        printf("OVERFLOW");
    else{
        if(FRONT==-1){
            FRONT++;
        }
        REAR=(REAR+1)%MAX;
        printf("Enter Item: ");
        scanf("%d",&item);
        a[REAR] = item;
    }
}

void dequeue(){
    if(FRONT==-1)
        printf("UNDERFLOW");
    else{
        printf("Deleted %d",a[FRONT]);
        if(FRONT == REAR){
            FRONT=-1; 
            REAR=-1;
        }
        else
            FRONT=(FRONT+1)%MAX;
    }
}

void display(){
    for(i=FRONT;i!=REAR;i=(i+1)%MAX)
        printf(" %d ",a[i]);
    printf(" %d ",a[i]);
}

void main(){
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    while(ch!=4){
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
        switch(ch){
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
                printf("INVALID");
        }
    }
}