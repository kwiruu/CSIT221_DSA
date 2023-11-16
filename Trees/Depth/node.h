#include <iostream>
struct node {
	int elem;
	node* left;
	node* right;
	node* parent;


    // TODO implement this method
    int depth() {
        if(parent){
        return 1 + parent->depth();
        }
        else{
        return 0;
        }
    }
};