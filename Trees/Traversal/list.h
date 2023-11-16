#include "node.h"
class List {
    public:
    virtual void add(node*) = 0;
    virtual node* get(int pos) = 0;
    virtual int remove(node* num) = 0;
    virtual void print() = 0;
};