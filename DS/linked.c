#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* next;
    int data;
};
struct Node *head=NULL,*newptr,*ptr,*ptr1;
int pos,ch=0,x=1,count=0;

void insertFront(){
    newptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data: ");
    scanf("%d",&newptr->data);
    if(newptr==NULL)
        printf("NO MEMORY");
    else{
        newptr->next=head;
        head=newptr;
    }
}

void insertEnd(){
    newptr = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data: ");
    scanf("%d",&newptr->data);
    if(newptr==NULL)
        printf("Insufficient Memory");
    else{
        newptr->next=NULL;
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newptr;
    }
}

void insertAny(){
    newptr = (struct Node*)malloc(sizeof(struct Node));
    if(newptr == NULL){
        printf("Insufficient Memory");
    }
    else{
        printf("Enter Data: ");
        scanf("%d",&newptr->data);
        printf("Enter Location To Insert: ");
        scanf("%d",&pos);
        ptr=head;
        while(ptr!=NULL){
            ptr=ptr->next;
            count++;
        }
        if(pos>count)
            printf("INVALID\n");
        else{
            ptr=head;
            while(x<pos){
                ptr=ptr->next;
                x++;
            } 
            newptr->next = ptr->next;
            ptr->next=newptr;
        }
    }
}

void deleteFront(){
    ptr=head;
    if(ptr==NULL)
        printf("Empty\n");
    else{
        head=head->next;
        printf("Deleted -> %d\n",ptr->data);
        free(ptr);
    }
}

void deleteEnd(){
    ptr=head;
    while(ptr->next!=NULL){
        ptr1=ptr;
        ptr=ptr->next;
    }
    ptr1->next=NULL;
    printf("Deleted -> %d\n",ptr->data);
    free(ptr);
}

void deleteAny(){
    ptr=head;
    printf("Enter Position: ");
    scanf("%d",&pos);
    while(x<pos && ptr->next!=NULL){
        ptr1=ptr;
        ptr=ptr->next;
        x++;
    }
    ptr1->next=ptr->next;
    printf("Deleted -> %d\n",ptr->data);
    free(ptr);
}

void Display(){
    ptr=head;
    while(ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void main(){
    printf("1.Insert At Front\n2.Insert At Back\n3.Insert Anywhere\n4.Delete From Front\n5.Delete At End\n6.Delete From Anywhere\n7.Display\n8.Exit\n");
    while(ch!=8){
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            insertFront();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertAny();
            break;
        case 4:
            deleteFront();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            deleteAny();
            break;
        case 7:
            Display();
            break;
        case 8:
        printf("EXITING...\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }
    }
}