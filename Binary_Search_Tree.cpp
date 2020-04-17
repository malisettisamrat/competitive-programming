// Implementation of BINARY SEARCH TREE 

struct Node{
  int data;
  struct Node *left,*right;
};

struct Node* New(int val)
{
    struct Node* tmp = new struct Node();
    tmp -> data = val;
    tmp -> right = tmp -> left = NULL;
    
    return tmp;
}

struct Node* insert(struct Node *root, int n)
{
    if( root == nullptr)
          root = New(n);
    
        if(n > root->data)
                root->right=insert(root->right,n);
        else if(n < root->data)
                root->left=insert(root->left,n);
  
    return root;
    
}

void inorder(struct Node* root)
{
    if(root){
      
          inorder(root->left);

          cout<<root->data<<" ";

          inorder(root->right);
    }
}

