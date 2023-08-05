#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node *newnode,*TOP=NULL,*ptr;
void push(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL)
        printf("Insufficient Memory");
    else{
        printf("Enter Data: ");
        scanf("%d",&newnode->data);
        newnode->next=TOP;
        TOP=newnode;
    }
}

void pop(){
    if(TOP==NULL)
        printf("UNDERFLOW\n");
    else{
        ptr=TOP;
        TOP=TOP->next;
        printf("Deleted: %d\n",ptr->data);
        free(ptr);
    }
    
}

void display(){
    ptr=TOP;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void main(){
    int ch=0;
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    while(ch!=4){
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
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