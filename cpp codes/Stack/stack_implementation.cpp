//Stack - Using Array
#include<iostream>
#include"stack.h"
using namespace std;
Stack::Stack()
{
	top=-1;
}
Stack::~Stack(){}
int Stack::isFull()
{
	return (top==M-1);
}
int Stack::isEmpty()
{
	return (top==-1);
}
void Stack::push(int d)
{
	if(isFull())
	{
		cout << "\nOverflow." ;
		return;
	}
	top++;
	arr[top]=d;
}
void Stack::pop()
{
	if(isEmpty())
	{
		cout << "\nUnderflow." ;
		return;
	}
	top--;
}
void Stack::display()
{
	if(isEmpty())
	{
		cout << "\nStack is Empty." ;
		return;
	}
	cout << "\nStack Data:\n" ;
	for(int i=top;i>=0;i--)
		cout << arr[i] << " " ;
	cout << endl;
}
void Stack::menu()
{
	int opt,d;
	while(1)
	{
		cout << "\nStack Menu:\n1.Push\n2.Pop\n3.Display Stack\n4.Exit\nOption:" ;
		cin >> opt ;
		if(opt>3)
			break;
		switch(opt)
		{
			case 1:
				cout << "\nData:" ;
				cin >> d;
				push(d);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
	}
}
