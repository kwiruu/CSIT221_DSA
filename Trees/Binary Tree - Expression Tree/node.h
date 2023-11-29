#include <string>
#include <iostream>
using namespace std;

struct node {
	string elem;
	node* left;
	node* right;
	node* parent;

    // TODO evaluate method
    int evaluate() {
        if (elem.size()==1 && (elem[0] == '+' || elem[0] == '-' || elem[0] == '*' || elem[0] == '/')){
            int leftVal = left->evaluate();
            int rightVal = right->evaluate();

            switch(elem[0]){
                case '+':
                    return leftVal+rightVal;
                break;
                case '-':
                    return leftVal-rightVal;
                break;
                case '*':
                    return leftVal*rightVal;
                break;
                case '/':
                    return leftVal/rightVal;
                break;
            default:
                cerr << "Invalid operator: " << elem << endl;
                return 0;
            }
        }
        else{
            return stoi(elem);
        }
    }
    
};