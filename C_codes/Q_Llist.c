//Queue using linked list
#include < stdio.h >
#include < stdlib.h >

struct node
{
    int data;
    struct node * next;
};

struct node * front = NULL;
struct node * rear = NULL;

void enqueue(int value)
{
    struct node * ptr;
    ptr = (struct node * ) malloc(sizeof(struct node));
    ptr - > data = value;
    ptr - > next = NULL;
    if ((front == NULL) && (rear == NULL))
    {
        front = rear = ptr;
    }
    else
    {
        rear - > next = ptr;
        rear = ptr;
    }
    printf("Node is Inserted\n\n");
}

// Dequeue() operation on a queue
int dequeue()
{
    if (front == NULL)
    {
        printf("\nUnderflow\n");
        return -1;
    }
    else
    {
        struct node * temp = front;
        int temp_data = front - > data;
        front = front - > next;
        free(temp);
        return temp_data;
    }
}

void display()
{
    struct node * temp;
    if ((front == NULL) && (rear == NULL))
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("The queue is \n");
        temp = front;
        while (temp)
        {
            printf("%d--->", temp - > data);
            temp = temp - > next;
        }
        printf("NULL\n\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n" Option:);

        scanf("%d", & choice);
        switch (choice) {
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
                break;
            default:
                printf("\nWrong Choice\n");
        }
    }
    return 0;
}
