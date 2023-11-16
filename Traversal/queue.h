
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
[2:50 PM] Keiru Vent   Cabili
#include <iostream>

#include "arraylist.h"

#include "queue.h"

using namespace std;
 
class ArrayQueue : public Queue {

	ArrayList* list = new ArrayList();

	public:

	void enqueue(node* num) {

		list->add(num);

	}
 
	node* dequeue() {

		if (isEmpty()) {

			return 0;

		}

		return list->removeFirst();

	}
 
	node* first() {

		if (isEmpty()) {

			return 0;

		}

		return list->get(size());

	}
 
	int size() {

		return list->_size();

	}
 
	bool isEmpty() {

		return list->_size() == 0;

	}
 
	void print() {

		list->print();

	}

};
