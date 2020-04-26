// Implementation of Binary Tree 

struct Node{
  
    int data ;
    struct Node* right;
    struct Node* left;

};

struct Node* New(int val)
{
    struct Node* tmp = new struct Node;
    tmp -> data = val;
    tmp -> right = tmp -> left = nullptr;
    
    return tmp;
}

Node* insert(vector<int>arr , Node* root, int i, int n) 
{ 
    if (i < n) 
    { 
        Node* temp = New(arr[i]); 
        root = temp; 
  
        root->left = insert(arr, root->left, 2 * i + 1, n); 

        root->right = insert(arr, root->right, 2 * i + 2, n); 
    } 
    return root; 
} 
