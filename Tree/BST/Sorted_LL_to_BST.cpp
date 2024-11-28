// Tnode* BuildBST(vector<int> &ans, int start, int end){
//     if(start > end){
//         return NULL;
//     }
//     int mid = start + (end - start + 1) / 2;
//     Tnode* root = new Tnode(ans[mid]);
//     root -> left = BuildBST(ans,start,mid-1;);
//     root -> right = BuildBST(ans,start,mid+1;);
//     return root;
// }

// Tnode* create(Lnode* head){
//     vector<int>tree;
//     while(head){
//         tree.push_back(head->data);
//         head = head -> next;
//     }
//     BuildBST(tree,0,tree.size()-1);
// }