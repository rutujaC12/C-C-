#include<iostream>

using namespace std;

class Stack 
{
private:
        int stack_array[10];
        int top;
        int size;
        int isEmpty()
        {
                if(top==-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
        int isFull()
        {
                if(top==size-1)
                {
                        return -1;
                }
                else
                {
                        return 1;
                }
        }
public:

Stack()
{
        top=-1;
        size=10;
}

Stack(int n)
{
        size=n;
}

int push(int data)
{
        if(isFull()==1)
        {
                top++;   
                stack_array[top]=data;
        }
        else
        {
                cout<<"Stack is full..."<<endl;
        }
        cout<<data<<" is inserted..."<<endl;
        return 0;
}

int pop()
{
        int poped_ele;
        if(isEmpty()==1)
        {       
                poped_ele=stack_array[top];
                top--;
        }
        else
        {
                cout<<"Stack is empty..."<<endl;
        }
        return poped_ele; 
}

int display()
{
        if(top==-1)
        {
                cout<<"Stack is empty...";
        }
        else
        {
                cout<<"Stack elements : ";
                for(int i=0;i<=top;i++)
                {
                        cout<<stack_array[i]<<"\t";
                }
        }
        return 0;
}
};

int main()
{
Stack s1;
int data,poped=0;
s1.push(10);
s1.push(20);
s1.push(30);
poped=s1.pop();
cout<<"Poped element is "<<poped<<endl;
s1.display();
return 0;
}
