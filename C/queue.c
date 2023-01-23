#include <stdio.h>
int a[50],MAX=5,FRONT=-1,REAR=-1,ch=0,item,i;
void enqueue(){
    if(REAR==MAX-1){
        printf("QUEUE OVERFLOW!!!");
    }
    else{
        if(FRONT==-1)
            FRONT=0;
        
        REAR++;
        printf("Enter Item To Enqueue: ");
        scanf("%d",&item);
        a[REAR]=item;
    }
}

void dequeue(){
    if(FRONT>REAR)
        printf("QUEUE UNDERFLOW!!!!");
    else{
        printf("Dequeued Element is %d",a[FRONT]);
        FRONT++;
    }
}

void display(){
    for(i=FRONT;i<=REAR;i++){
        printf(" %d ",a[i]);
    }
}

void main(){
    printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    while(ch!=4){
        printf("\nEnter Choice: ");
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
            printf("Exiting...");
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}