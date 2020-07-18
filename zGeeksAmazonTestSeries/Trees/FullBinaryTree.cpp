
// Problem Link : https://practice.geeksforgeeks.org/problems/full-binary-tree/1/?track=amazon-trees&batchId=192
bool call(Node* root){

    if(root == NULL) return true;

    if((root -> left == NULL) && (root -> right == NULL)) return true;

    if((root -> left) && (root -> right)){
        return ((call(root -> left)) && ((call(root -> right))));
    }

    return false;
}

bool isFullTree (struct Node* root)
{
    //add code here.
    return call(root);
}
