#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next; 
};
struct Node *newnode,*FRONT=NULL,*REAR=NULL,*ptr;

void enqueue(){
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data: ");
    scanf("%d",&newnode->data);
    if(FRONT==NULL && REAR==NULL)
        FRONT=REAR=newnode;
    else{
        REAR->next=newnode;
        REAR=newnode;
    }
}

void dequeue(){
    if(FRONT==NULL)
        printf("UNDERFLOW\n");
    else{
        ptr=FRONT;
        FRONT=FRONT->next;
        printf("Deleting -> %d\n",ptr->data);
        free(ptr);    
    }
}

void display(){
    ptr=FRONT;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void main(){
    int ch=0;
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    while(ch!=4){
        printf("Enter Choice: ");
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
                printf("Exiting...\n");
                break;
            default:
                printf("INVALID\n");
        }
    }
}