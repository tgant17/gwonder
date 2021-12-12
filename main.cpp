
#include "Tree.cpp"
int main()
{
    Tree T;
    T.Construct();

    cout<<"\nPreOrder traversal:\n";    
    T.PreOrder(T.root);
    //PreOrder traversal
    void Tree::PreOrder(Node *p) {
 if(p!=NULL){ //recursive call
    cout<<p->info<<" ";
    PreOrder(p->LChild);
    PreOrder(p->RChild);
}
    };

    cout<<"\nInOrder traversal:\n";
    //T.InOrder(T.root);
    cout<<"\nPostOrder traversal:\n";
    //T.PostOrder(T.root);    
    cout<<"\nLevelOrder traversal:\n";
    //T.LevelOrder(T.root);    
  
 return 0; 
}

