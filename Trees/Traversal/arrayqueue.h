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