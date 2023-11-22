//queue implementation using array
#include <stdio.h>
#define M 5
void enqueue();
void dequeue();
void display();
int queue[M];
int rear =-1;
int front=-1;
void main()
{
    int choice;
    while (1)
    {
        printf("1.Enqueue\n 2.Dequeue\n3.Display\n4.Exit\n Option:");
        scanf("%d", &choice);
        switch (choice)
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
                exit(1);
              default:
            printf("Wrong choice \n");
        }
    }
}

void enqueue()
{
    int add_item;
    if (rear == M - 1)
        printf("Queue is FULL \n");
    else
    {
       if (front == - 1)
        front = 0;
        printf("Insert element:\n ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue[rear] = add_item;
    }
}
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Deleted Element: %d\n", queue[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front>rear)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <=rear; i++)
            printf("%d\n", queue[i]);
        printf("\n");
    }
}
