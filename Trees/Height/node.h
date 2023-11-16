#include <iostream>
#include <algorithm>
using namespace std;
struct node {
	int elem;
	node* left;
	node* right;
	node* parent;
 
    // TODO implement this method
    int height() {
 
    if(!left && !right){
    return 0;
    }
    if(!right){
        return 1+ left->height();
    }
    if(!left){
        return 1+right->height();
    }
    else{
    return 1 + max(left->height(), right->height());
    }
    }
};