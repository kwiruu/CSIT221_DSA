// DO NOT modify this file.
#include "node.h"
class BinaryTree {
	public:
	virtual node* left(node*) = 0;
	virtual node* addRoot(int e) = 0;
	virtual node* addLeft(node* p, int e) = 0;
	virtual node* addRight(node* p, int e) = 0;
	virtual int getRoot() = 0;
	virtual void print() = 0;
	virtual void preorder() = 0;
	virtual void inorder() = 0;
	virtual void postorder() = 0;
	virtual void breadthfirst() = 0;
};
