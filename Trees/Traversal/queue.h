#include "node.h"
class Queue {
	public:
	virtual void enqueue(node*) = 0;
	virtual node* dequeue() = 0;
	virtual node* first() = 0;
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
	virtual void print() = 0;
};