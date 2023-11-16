#include <cstdlib>
#include <iostream>
#include "binarytree.h"
#include "arrayqueue.h"
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
 
	node* left(node* p) {
		return p->left;
	}
 
	node* right(node* p) {
		return p->right;
	}
 
    // TODO traversal methods
	void preorder() {
    pre_traverse(root);
    }
 
    void pre_traverse(node* n){
    cout << n->elem << " ";
        if(n->left){
            pre_traverse(n->left);
        }
        if(n->right){
        pre_traverse(n->right);
        }
    }
 
	void inorder() {
        in_traverse(root);
    }
 
    void in_traverse(node* n){
        if(n->left){
            in_traverse(n->left);
        }
        cout << n->elem << " ";
        if(n->right){
        in_traverse(n->right);
        }
    }
 
    void postorder() {
        post_traverse(root);
    }
 
     void post_traverse(node* n){
        if(n->left){
            post_traverse(n->left);
        }
        if(n->right){
        post_traverse(n->right);
        }
        cout << n->elem << " ";
    }
 
	void breadthfirst() {
        if(!root) {
            return;
        }
        ArrayQueue* q = new ArrayQueue();
        q->enqueue(root);
        while(!q->isEmpty()) {
            node* current = q->dequeue();
            cout << current->elem << " ";
            if(current->left) {
                q->enqueue(current->left);
            }
            if(current->right) {
                q->enqueue(current->right);
            }
            }
        }
 
 
	node* addLeft(node* p, int e) {
		if (p->left) {
			throw logic_error(to_string(p->elem) + " already has left child");
		}
		node* n = create_node(e, p);
		p->left = n;
		size++;
		return n;
	}
 
    // COPY your implementation
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
            cout << "Illegal parent of " << curr->elem << ": " << curr->parent << " -- must be " << par << endl;
            return false;
        }
        return check_parent(curr->left, curr) && check_parent(curr->right, curr);
    }
};