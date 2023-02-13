#include <stdio.h>
#include <string.h>

int i,TOP=-1,MAX=100;
char str[100],stack[100];

void push(char ch){
    if(TOP == MAX-1)
        printf("OVERFLOW");
    else{
        TOP++;
        stack[TOP]=ch;
    }
}

void pop(){
    TOP--;
}

void display(char ch){
    printf("%c",ch);
}

void main(){
    printf("Enter String: ");
    scanf("%[^\n]s",str);
    
    for(i=0;i<strlen(str);i++){
        push(str[i]);
    }

    printf("Reversed String: ");
    for(i=TOP;i>=0;i--){
        display(stack[i]);
    }

    for(i=0;i<strlen(str);i++){
        pop();
    }

}