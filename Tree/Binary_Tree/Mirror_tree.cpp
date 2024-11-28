// void mirror(Node* root){
//     if(!root){
//         return;
//     }
//     Node* temp = root->right;
//     root->right = root->left;
//     root->left = temp;

//     mirror(root->left);
//     mirror(root->right);
// }