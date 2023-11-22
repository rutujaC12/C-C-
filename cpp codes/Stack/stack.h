//Stack - Using Array
#include<iostream>
#define M 5
class Stack
{
	int top;
	int arr[M];
	public:
	Stack();
	~Stack();
	int isFull();
	int isEmpty();
	void push(int d);
	void pop();
	void display();
	void menu();
};
