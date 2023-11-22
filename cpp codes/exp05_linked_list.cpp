#include<iostream>
#include<iomanip>

using namespace std;

class Node
{
        public:
                int data;
                Node *next;
        Node()
        {
                data=0;
                next=NULL;
        }
};

class Linked_list : public Node
{
        public:
                Node *head;
                Linked_list()
                {
                        head=NULL;
                }
                void attach_at_begin(int data);
                void attach_at_end(int data);
                void detach_at_begin();
                void detach_at_end();
                void display();
};

void Linked_list::attach_at_begin(int data)
{
        Node *temp=new Node();
        temp->data=data;
        temp->next=NULL;
        temp->next=head;
        head=temp;
}

void Linked_list::attach_at_end(int data)
{
        Node *temp;
        Node *q;
        if(head==NULL)
        {
                temp=new Node();
                temp->data=data;
                temp->next=NULL;
                head=temp;
        }
        else
        {
                q=head;
                while(q->next!=NULL)
                {
                        q=q->next;
                }
                temp=new Node();
                q->next=temp;
                temp->data=data;
                temp->next=NULL;
        }
}

void Linked_list::detach_at_begin()
{
        Node *temp=head;
        if (head == NULL)
        {
                cout<<"List is Empty..."<<endl;
        }
        head=temp->next;
        delete temp;
        cout<<"Element is deleted..."<<endl;
}

void Linked_list::detach_at_end()
{
        if(head==NULL)
        {
                cout<<"List is empty..."<<endl;
        }
        else
        {
                Node *temp,*ptr;
                temp=head;
                ptr=temp->next;
                while(ptr->next!=NULL)
                {
                        temp=temp->next;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                delete ptr;
                cout<<"Element is deleted..."<<endl;
        }
}

void Linked_list::display()
{
        Node *temp=head;
        while(temp!=NULL)
        {
                cout<<"Linked list is: "<<temp->data<<endl;
                temp=temp->next;
        }
}

int main()
{
        Linked_list l1;
        l1.attach_at_begin(10);
        l1.attach_at_begin(20);
        l1.attach_at_end(30);
        l1.attach_at_end(40);
        l1.display();
        l1.detach_at_begin();
        l1.display();
        l1.detach_at_end();
        l1.display();
        return 0;
}
