#include "list.h"
#include "node.h"
#include <iostream>
#include <cmath>
using namespace std;

class LinkedList : public List {
    node *tail, *head;
    int size;

    void addNode(int num, node* pred, node* succ){

        node* temp = (node*)malloc(sizeof(node));
        
        temp-> ram = num;
        temp->prev = pred;
        temp->next = succ;

        pred->next = temp;
        succ->prev = temp; 
		size++;

    }
    
    void removeNode(node* curr){
            node* suc = curr->next;
            node* pre = curr->prev;
            pre->next = suc;
            suc ->prev = pre;
            free(curr);
            size--;
    }

public:

    LinkedList(){
            cout<< "Ni gana ang linked List" << endl;
            head = (node*) calloc(1, sizeof(node));
            tail = (node*) calloc(1, sizeof(node));
            head->next = tail;
            tail->prev = head;
            size=0;
        }

    void addFirst(int num) {
		addNode(num,head,head->next);
	}

    void addLast(int num) {
		addNode(num,tail->prev,tail);
	}

    void removeFirst() {
		if (!head) {
			return;
		}
		head = head->next;
		if (head) {
			free(head->prev);
			head->prev = nullptr;
		} else {
			free(tail);
			tail = nullptr;
		}
		size--;
	}

	void removeLast() {
		if (!tail) {
			return;
		}
		tail = tail->prev;
		if (tail) {
			free(tail->next);
			tail->next = nullptr;
		} else {
			free(head);
			head = nullptr;
		}
		size--;
	}

    void add(int num){
        addNode(num,tail->prev,tail);
    }

    int remove(int num){
        node* curr = head->next;
        int ctr=1;
        int i;

        while(curr != nullptr){
            if(curr->ram == num){
                i = curr->ram;
                removeNode(curr);
                return i;
            }
            curr = curr->next;
        }
        return -1;
    }

    int get(int pos){
        node* curr = head;
        int ctr=1;
        while(ctr != pos){
           return curr->ram;
        }
        curr = curr->next;
        ctr++;
        return -1;
    }

    //Guba sad ni
    void addAt(int pos, int num){
        node* newNode = new node;
        newNode->ram = num;

            if(pos == 1){
                addFirst(num);
            }
            else if(pos == size+1){
                addLast(num);
            }
            else{   
                node* curr = head;
                int ctr=1;
                while(ctr < pos-1){
                    curr = curr->next;
                    ctr++;
                }
                    addNode(num,curr,curr->next);

            }
    }

    void removeAt(int pos){
        node* curr = head;
        int ctr=1;

        while(ctr != size){
            if(ctr == pos){
                if(ctr==1){
                    removeFirst();
                }
                if(ctr==size){
                    removeLast();
                }
            
            removeNode(curr);
            }
            curr = curr->next;
            ctr++;
        }
    }
    // Guba ni "dapat dili siya ma end if empty and list"
    int retain(int num){
        int ctr = 0;

        node* curr = head->next;
        node* temp = curr;

        while(curr != tail){
            if(curr->ram < num){
                temp = curr->next;
                removeNode(curr);
                curr = temp;
                ctr++;
            }else{
                curr = curr->next;
            }
        }
        return ctr;
    }
// guba ni "di mu corner"
    int corner(int left,int right){

            int ctr = 0;
            int flag = 0;

            node* curr = head->next;
            node* temp = curr;

            while(ctr < left){
                ctr++;
                curr = curr->next;
            }

            temp = curr;
            right = (size - right);

            while(ctr < right){
                temp = temp->next;
                removeNode(curr);
                curr = temp;
                flag++;
                ctr++;
            }
            return flag;
    }
// guba dili mu padayon
    int removeRedundant(){

        int ctr = 0;

        node* curr = head->next;
        
        while(curr->next != tail){
            node* trav = curr->next;
        while(trav != tail){
            if(curr->ram == trav->ram){
                node* temp = trav->next;
                removeNode(trav);
                trav = temp;
                ctr++;
            }else{
                trav = trav->next;
            }
        }
        curr = curr->next;
        }
        return ctr;
    }



   void print() {
    	node* curr;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else {
			cout << "From HEAD: ";
    		curr = head;
	    	while (curr) {
	    		cout << curr->ram;
	    		if (curr != tail) {
	    			cout << " -> ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->next;
			}
			cout << "From TAIL: ";
    		curr = tail;
	    	while (true) {
	    		cout << curr->ram;
	    		if (curr != head) {
	    			cout << " <- ";
				} else {
					cout << endl;
                    break;
				}
	    		curr = curr->prev;
			}
		}
    }

    void sortList(){

        node* curr = head->next;
        while(curr!=tail){
            node* trav = head->next;
            while(trav!=tail){
                if(trav->ram > curr->ram){
                    int temp = trav->ram;
                    trav->ram = curr->ram;
                    curr->ram = temp;
                }
                trav = trav->next;
            }
            curr = curr->next;
        }
        cout << "& Success!";
    }

};