//Queue - Using Array
#include<iostream>
#define M 5
class Queue
{
	int fr,rr;
	int arr[M];
	public:
	Queue();
	~Queue();
	int isFull();
	int isEmpty();
	void insert(int d);
	void remove();
	void display();
	void menu();
};
