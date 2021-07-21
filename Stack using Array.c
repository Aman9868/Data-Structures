/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
//Push Function
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Oveerflow! Cannot push %d to the\n",val);
    }
    else{
        ptr->top++;  //structure of array
        ptr->arr[ptr->top]=val;  //chnging top most position
    }
}
//POP FUNCTUON 
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Undeflow! Cannot pop\n");
    }
    else{
       int val=ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}
//PEEK Function
int peek(struct stack* s,int i){
int arrInd=s->top-i+1;
 if(arrInd<0){
        printf("Not a valid position for stack");
        return -1;
    }
    else{
        return s->arr[arrInd];
    }
}

//STACK top
int stacktop(struct stack* s){
    return s->arr[s->top];
}
//STACK Bottom
int stackbotm(struct stack* s){
    return s->arr[0];
}
void main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1; //stack empty
    s->arr=(int *)malloc(s->size *sizeof(int));
    printf("Stack has created successfully\n");
    //Push Element to stack
    printf("Before pushing, Full: %d\n",isFull(s));
    printf("Before pushing Empty: %d\n",isEmpty(s));
    push(s,16);
    push(s,26);
    push(s,36);
    push(s,66);
    push(s,46);
    push(s,56);
     push(s,76);
     push(s,46);
    //Chcek stack is empty or not 
    printf("After pushing, Full: %d\n",isFull(s));
    printf("After pushing Empty: %d\n",isEmpty(s));
    printf("\n");
    
    //CHECK POPP
    //LAST IN FIRST OUT
    printf("Popped %d from the stack\n",pop(s));
    printf("Popped %d from the stack\n",pop(s));
    printf("Popped %d from the stack\n",pop(s));
    printf("\n");
    
    //STACK TOP &Bottom
    printf("Stack top value is %d\n",stacktop(s));
    printf("Stack bottom value is %d\n",stackbotm(s));
    
    
    
    
    //PEEK
    for(int j=1;j<s->top+1;j++){
    printf("The value at index %d is  %d\n",j,peek(s,j));}
}


