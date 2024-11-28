// class heap{
//     public : 
//     int size;
//     int arr[100];

//     heap(){
//         arr[0] = -1;
//         size = 0;
//     }

//     void insertion(int val){
//         size = size + 1;
//         int index = size;
//         arr[index] = val;

//         while(index > 1){
//             int parent = index / 2;;
//             if(arr[parent] <= arr[index]){
//                 swap(arr[parent],arr[index]);
//                 index = parent;
//             }
//             else{
//                 return;
//             }
//         }
//     }
// };