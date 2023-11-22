//stack using linked list
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
int main()
{
    int val, choice;
    do
   // while(1)
    {
        printf("\n 1. PUSH \n 2. POP\n 3. PEEK\n 4. DISPLAY\n 5. EXIT \n Option:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\n Enter element: ");
                scanf("%d", &val);
                top = push(top, val);
                break;
            case 2:
                top = pop(top);
                break;
            case 3:
                val = peek(top);
                if (val != -1)
                printf("\n top of stack is: %d", val);
                else
                printf("\n STACK IS EMPTY");
                break;
            case 4:
                top = display(top);
                break;
        }
    }while(choice!= 5);
    return 0;
}

struct stack *push(struct stack *top, int val)
{
    struct stack *ptr;
    ptr = (struct stack*)malloc(sizeof(struct stack));
    ptr -> data = val;
    if(top == NULL)
    {
        ptr -> next = NULL;
        top = ptr;
    }
    else
    {
        ptr -> next = top;
        top = ptr;
    }
    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    ptr = top;
    if(top == NULL)
        printf("\n STACK UNDERFLOW");
    else
    {
        top = top -> next;
        printf("\n deleted element is: %d", ptr -> data);
        free(ptr);
    }
    return top;
}
int peek(struct stack *top)
{
    if(top==NULL)
    return -1;
    else
    return top ->data;
}
struct stack *display(struct stack *top)
{
    struct stack *ptr;
    ptr = top;
    if(top == NULL)
    printf("\n STACK IS EMPTY");
    else
    {
        while(ptr != NULL)
        {
            printf("\n %d", ptr -> data);
            ptr = ptr -> next;
        }
    }
    return top;
}


