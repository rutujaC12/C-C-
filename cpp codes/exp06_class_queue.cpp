#include<iostream>
 using namespace std;
 
class Queue
{
private:
        int front;
        int rear;
        int size;
        int Queue_array[10];
        int isUnderflow()
        {
                if(front==-1 && rear==-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
        int isOverflow()
        {
                if(rear==size-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
public:
        Queue();
        Queue(int n);
        int enqueue(int data);
        int dequeue();
        int display();    
};

Queue::Queue()
{
        front=-1;
        rear=-1;
        size=10;
}

Queue::Queue(int n)
{
        size=n;
}

int Queue::enqueue(int data)
{
        if(Queue::isOverflow()==-1)
        {
             cout<<"Queue is Overflow..."<<endl;   
        }
        else
        {
                if(rear<size-1)
                {
                        Queue_array[rear=rear+1]=data;
                        if(front==-1)
                        {
                                front=0;
                        }
                }
                cout<<data<<" element inserted..."<<endl;
        }  
        return 0;    
}

int Queue::dequeue()
{
        if(Queue::isUnderflow()==-1)
        {
                cout<<"Queue is Underflow..."<<endl;
        }
        else
        {       if(front==rear)
                {
                        cout<<"Deleted Item: "<<Queue_array[front]<<endl;
                        front--;
                        rear--;
                }
                else
                {
                        cout<<"Deleted Item: "<<Queue_array[front]<<endl;
                        for(int i=0;i<=rear-1;i++)
                        {
                                Queue_array[i]=Queue_array[i+1];
                        }
                        front=front+1;
                }
        }
        return 0;
}

int Queue::display()
{
        if(Queue::isUnderflow()==-1)
        {
                cout<<"Queue is unserflow...";
        }
        else
        {
               cout<<"Queue elements is ";
               for(int i=front;i<=rear;i++)
               {
                        cout<<Queue_array[i];
               } 
        }
        return 0;
}

int main()
{
Queue q1;
q1.enqueue(10);
q1.enqueue(20);
q1.dequeue();
q1.display();
return 0;
}


