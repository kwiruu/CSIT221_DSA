#include <cstdlib>
#include <iostream>
#include "binarytree.h"
#include <string>
using namespace std;
 
class MyBinaryTree : public BinaryTree {
	node* root;
	int size;
 
	node* create_node(int e, node* parent) {
		node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = e;
		n->parent = parent;
		return n;
	}
 
	public:
	node* addRoot(int e) {
		if (root) {
			throw logic_error("Already has root");
		}
		node* n = create_node(e, NULL);
		root = n;
		size++;
		return n;
	}
 
	node* left(node* n) {
		return n->left;
	}
 
	node* right(node* n) {
		return n->right;
	}
 
    // TODO add sibling method here
 
    node* sibling(node* n){
        if(root==n){
            return 0;
        }
        node* parent = n->parent;
        if(parent->left==n){
        return parent->right;
        }
        if(parent->right==n){
        return parent->left;
        }
    }
 
 
    // DO NOT modify the code below.
	node* addLeft(node* p, int e) {
		if (p->left) {
			throw logic_error(to_string(p->elem) + " already has left child");
		}
		node* n = create_node(e, p);
		p->left = n;
		size++;
		return n;
	}
 
    // COPY your own addRight implementation
	node* addRight(node* p, int e) {
		if (p->right) {
			throw logic_error(to_string(p->elem) + " already has right child");
		}
		node* n = create_node(e, p);
		p->right = n;
		size++;
		return n;
	}
 
	int getRoot() {
		return root->elem;
	}
 
	void print() {
		cout << "Size: " << size << endl;
		if (!root) {
			cout << "EMPTY" << endl;
			return;
		}
		node* curr = root;
		print_node("", root, false);
        cout << "Status: " << check_parent(root, NULL) << endl;
	}
 
	void print_node(string prefix, node* n, bool isLeft) {
		cout << prefix;
        cout << (isLeft ? "+--L: " : "+--R: " );
        cout << n->elem << endl;
		if (n->left) {
			print_node(prefix + "|   ", n->left, true);
		}
		if (n->right) {
			print_node(prefix + "|   ", n->right, false);
		}
	}
 
    bool check_parent(node* curr, node* par) {
        if (!curr) {
            return true;
        }
        if (curr->parent != par) {
            return false;
        }
        return check_parent(curr->left, curr) && check_parent(curr->right, curr);
    }
};