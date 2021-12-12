
#include "Queue.h"

class Tree {

public:
    Node* root, * tmp, * p;
    Tree() {//constructor
        root = NULL;
    }


  ~Tree(){
      Queue Q(10);
      if(root!=NULL){ //tree is not empty
          Q.enqueue(root);

          while(!Q.isEmpty()){
            p = Q.dequeue();
            if(p->LChild) Q.enqueue(p->LChild);
            if(p->RChild) Q.enqueue(p->RChild);
            delete p;
            //cout<<"\nNode deleted\n";
          }
      }
    }

    void Construct() {
        Queue Q(10); //create queue of size 10
        int x;
        //constructing root node
        root = new Node;
        cout << "Enter value of root:";
        cin >> x;
        root->info = x;
        root->LChild = NULL;
        root->RChild = NULL;
        Q.enqueue(root);//push root in queue 
        while (!Q.isEmpty()) {
            p = Q.dequeue();
            //add left child to p
            cout << "\nEnter left child of " << p->info << " (-1 for null):";
            cin >> x;
            if (x != -1) {
                tmp = new Node;
                tmp->info = x;
                tmp->LChild = NULL;
                tmp->RChild = NULL;
                p->LChild = tmp;
                Q.enqueue(tmp);//push left child in p
            }
            //add right child to p – part of the loop
            cout << "\nEnter right child of " << p->info << " (-1 for null):";
            cin >> x;
            if (x != -1) {
                tmp = new Node;
                tmp->info = x;
                tmp->LChild = NULL;
                tmp->RChild = NULL;
                p->RChild = tmp;
                Q.enqueue(tmp); //push right child of p
            }
        }
    }

    void PreOrder(Node* p) {
        if (p != NULL) { //recursive call
            cout << p->info << " ";
            PreOrder(p->LChild);
            PreOrder(p->RChild);
        }
    }
};