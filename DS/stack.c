#include <stdio.h>
int a[50],MAX=5,TOP=-1,DOWN=-1,ch=0,item,i;
void push(){
    DOWN=0;
    if(TOP==MAX-1){
        printf("STACK OVERFLOW!!!!\n");
    }
    else{
        TOP++;
        printf("Enter Item To Push: ");
        scanf("%d",&item);
        a[TOP]=item;
    }
}

void pop(){
    if(TOP<DOWN)
       printf("STACK UNDERFLOW!!!");
    else{
        printf("Popped Element is %d",a[TOP]);
        TOP--;
    }
}

void display(){
    for(i=TOP;i>=DOWN;i--){
        printf("%d\n",a[i]);
    }
}

void main(){
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
    while(ch!=4){
        printf("\nEnter Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
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
            printf("Exiting...");
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}