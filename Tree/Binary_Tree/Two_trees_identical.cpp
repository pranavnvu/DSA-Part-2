// bool isidentical(Node* r1, Node* r2){
//     if(!r1 && !r2){
//         return 1;
//     }
//     if((!r1 && r2) || (r1 && !r2)){
//         return 0;
//     }
//     if(r1 -> data != r2 -> data){
//         return 0;
//     }
//     return isidentical((r1->left, r2->left) && (r1->right, r2->right));
// }