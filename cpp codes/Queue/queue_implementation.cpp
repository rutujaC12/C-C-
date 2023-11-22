//Queue - Using Array
#include<iostream>
#include"queue.h"
using namespace std;
Queue::Queue()
{
	rr=-1;
	fr=0;
}
Queue::~Queue(){}
int Queue::isFull()
{
	return (rr==M-1);
}
int Queue::isEmpty()
{
	return (rr<fr);
}
void Queue::insert(int d)
{
	if(isFull())
	{
		cout << "\nOverflow." ;
		return;
	}
	rr++;
	arr[rr]=d;
}
void Queue::remove()
{
	if(isEmpty())
	{
		cout << "\nUnderflow." ;
		return;
	}
	fr++;
}
void Queue::display()
{
	if(isEmpty())
	{
		cout << "\nQueue is Empty." ;
		return;
	}
	cout << "\nQueue Data:\n" ;
	for(int i=fr;i<=rr;i++)
		cout << arr[i] << " " ;
	cout << endl;
}
void Queue::menu()
{
	int opt,d;
	while(1)
	{
		cout << "\nQueue Menu:\n1.Insert\n2.Remove\n3.Display Queue\n4.Exit\nOption:" ;
		cin >> opt ;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout << "\nData:" ;
				cin >> d;
				insert(d);
				break;
			case 2:
				remove();
				break;
			case 3:
				display();
				break;
		}
	}
}
