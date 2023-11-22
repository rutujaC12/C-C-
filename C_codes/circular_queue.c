//circular_queue implementation using array
#include <stdio.h>
#include <stdlib.h>
#define M 5
void insert();
void delete();
void display();
int queue[M];
int rear =-1;
int front=-1;
void main()
{
    int choice;
    while (1)
    {
        printf("\n 1.Insert\n 2.Delete\n3.Display\n4.Exit\n Option:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
              break;
            case 2:
                delete();
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

void insert()
{
    int element;
    printf(" enter element");
    scanf("%d",&element);
    if(front == (rear + 1)%M)
    {
        printf("Queue is FULL \n");
    }

    else if (rear==-1 && front == -1)
       {

        front = rear=0;
        queue[rear] = element;
       }
    else
       {
         rear = (rear + 1)% M;
        queue[rear] = element;
       }
}
void delete()
{
    int element;
    if (front == - 1 && rear== -1)
    {
        printf("Queue Underflow \n");
        return(1) ;
    }
    else if (front == rear)
   {
    element = queue[front];
    printf("\n Deleted element :%d \n", element);
     {
      front = -1;
      rear = -1;
     }
   }
    else
    {
        printf("\n Deleted element :%d \n", queue[front]);
      front = (front + 1) % M;
    }

    return (element);

}
void display()
{
    int i=front;
    if (front==-1 && rear==-1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Queue is : \n");

        if(front<rear)
        {
          for(i=front;i<=rear;i++)
            printf("%d\n", queue[i]);
        }
        else
        {
            for(i=front;i<M;i++)
                printf("%d\n", queue[i]);
            for(i=0;i<=rear;i++)
                printf("%d\n", queue[i]);
        }
    }
}
